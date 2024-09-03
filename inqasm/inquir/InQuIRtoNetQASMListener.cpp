#include "InQuIRtoNetQASMListener.hpp"

InQuIRtoNetQASMListener::InQuIRtoNetQASMListener() {
    current_file1 = "";
    current_file2 = "";
    current_file_info = "---\n";
    current_process_num = "0";

    array_counter = "0";
    qubit_counter = "0";
    clbit_counter = "0";
    file_counter = "0";
    
    branched = false;
}

const std::unordered_map<std::string, std::string> InQuIRtoNetQASMListener::gate_equivalences = {
        {"CX", "cnot"},
        {"X", "x"},
        {"Y", "y"},
        {"Z", "z"},
        {"H", "h"},
        {"S", "s"},
        {"K", "k"},
        {"T", "t"}
    };

// ------------------- Private methods -------------------

void InQuIRtoNetQASMListener::augmentCounter(std::string &counter) {
    counter = std::to_string(stoi(counter) + 1);
}

void InQuIRtoNetQASMListener::closeFile(bool finish_process) {
    for (auto i = 0; i < stoi(array_counter); i++) {
        auto new_line = "ret_arr @" + std::to_string(i) + "\n";
        
        current_file1 += new_line;
        current_file2 += branched ? new_line : "";
    }
    
    std::string nqasm_name1, nqasm_name2, info_name;
    auto node = "Node" + current_process_num;
    mkdir(node.c_str(), 0777);
    if(branched){
        nqasm_name1 = node + "/file_" + file_counter + "A.nqasm";
        nqasm_name2 = node + "/file_" + file_counter + "B.nqasm";
        info_name = node + "/file_info" + file_counter + ".yaml";
    } else {
        nqasm_name1 = node + "/file_" + file_counter + ".nqasm";
    }
    
    std::ofstream out_file1(nqasm_name1);
    if (out_file1.is_open()) {
        out_file1 << current_file1;
        out_file1.close();

        if(branched) {
            std::ofstream out_file2(nqasm_name2);
            if (out_file2.is_open()) {
                out_file2 << current_file2;
                out_file2.close();
            } else {
                std::cerr << "Error abriendo." << std::endl;
            }

            std::ofstream info_file(info_name);
            if (info_file.is_open()) {
                info_file << current_file_info;
                info_file.close();
            } else {
                std::cerr << "Error abriendo." << std::endl;
            }
        }

        netqasm_files.push_back(nqasm_name1);
        netqasm_files.push_back(nqasm_name2);
        current_file1 = "";
        current_file2 = "";
        array_counter = "0";
        qubit_counter = "0";
        clbit_counter = "0";
        file_counter = "0";
        
        if(finish_process){
            branched = false;
        }
    } else {
        std::cerr << "Error opening file for writing." << std::endl;
    }
}

void InQuIRtoNetQASMListener::applyQuantumGate(InQuIRParser::GateContext *gate, std::vector<InQuIRParser::QubitContext *> gate_qubits) {
    std::string gate_name = gate->getText();

    auto new_line = gate_equivalences.at(gate_name) + " " ;
    current_file1 += new_line;
    current_file2 += (not branched ?  new_line : "");

    for(auto qubit: gate_qubits){
        new_line = "Q" + std::to_string(qubits[qubit->getText()]) + " ";
        current_file1 += new_line;
        current_file2 += (not branched ?  new_line : "");
    }
    current_file1 += "\n";
    current_file2 += (not branched ?  "\n" : "");
}

// ------------------- Listener methods -------------------

void InQuIRtoNetQASMListener::enterMainprogram(InQuIRParser::MainprogramContext * ctx) {
}

void InQuIRtoNetQASMListener::exitMainprogram(InQuIRParser::MainprogramContext * ctx) {
}

void InQuIRtoNetQASMListener::enterProcess(InQuIRParser::ProcessContext * ctx) {
    current_file1 += "# NETQASM 1.0\n";
    current_file1 += "# APPID 0\n";
}

void InQuIRtoNetQASMListener::exitProcess(InQuIRParser::ProcessContext * ctx){
    closeFile(true);
    augmentCounter(current_process_num);
}

void InQuIRtoNetQASMListener::exitInit(InQuIRParser::InitContext * ctx) {
    auto qubit = "Q" + qubit_counter;

    auto new_line = "set " + qubit + " " + qubit_counter + "\n";
    current_file1 += new_line;
    current_file2 += (branched ?  new_line : "");

    new_line = "qalloc " + qubit + "\n";
    current_file1 += new_line;
    current_file2 += (branched ?  new_line : "");

    new_line = "init " + qubit + "\n";
    current_file1 += new_line;
    current_file2 += (branched ?  new_line : "");

    qubits[ctx->value()->getText()] = stoi(qubit_counter);
    augmentCounter(qubit_counter);
}

void InQuIRtoNetQASMListener::exitGenEnt(InQuIRParser::GenEntContext * ctx) {
    auto qubit = "Q" + qubit_counter;

    current_file1 += "set " + qubit + " " + qubit_counter + "\n";
    current_file1 += "qalloc " + qubit + "\n";
    current_file1 += "init " + qubit + "\n";
    
    qubits[ctx->value()->getText()] = stoi(qubit_counter);

    if(stoi(current_process_num) < stoi(ctx->participant()->getText())){
        
        std::vector<std::string> arrays(3);
        for (auto i = 0; i < 3; i++) {
            arrays[i] = "@" + array_counter;
            augmentCounter(array_counter);
        }
        
        // Arrays with hardcoded size for entanglement generation, should be changed to accept various pairs
        current_file1 += "array 10 " + arrays[0] + "\n";
        current_file1 += "array 1 "  + arrays[1] + "\n";
        current_file1 += "array 20 " + arrays[2] + "\n";
        current_file1 += "store " + qubit_counter + " " + arrays[1] + "[0]\n";
        current_file1 += "store 0 "  + arrays[2] + "[0]\n";
        current_file1 += "store 1 "  + arrays[2] + "[1]\n";

        auto epr_dest = ctx->participant()->getText();
        current_file1 += "create_epr(" + epr_dest + ", 0) 1 2 0\n";
        current_file1 += "wait_all " + arrays[0] + "[0:10]\n";
    } else {
        std::vector<std::string> arrays(2);
        for (auto i = 0; i < 2; i++) {
            arrays[i] = "@" + array_counter;
            augmentCounter(array_counter);
        }
        
        // Arrays with hardcoded size for entanglement generation, should be changed to accept various pairs
        current_file1 += "array 10 " + arrays[0] + "\n";
        current_file1 += "array 1 "  + arrays[1] + "\n";
        current_file1 += "store " + qubit_counter + " " + arrays[1] + "[0]\n";

        auto epr_dest = ctx->participant()->getText();
        current_file1 += "recv_epr(" + epr_dest + ", 0) 1 0\n";
        current_file1 += "wait_all " + arrays[0] + "[0:10]\n";
    }
    
    augmentCounter(qubit_counter);
}

void InQuIRtoNetQASMListener::exitUsualGate(InQuIRParser::UsualGateContext * ctx) {
    applyQuantumGate(ctx->gate(), ctx->qubit());
}


void InQuIRtoNetQASMListener::exitMeasure(InQuIRParser::MeasureContext * ctx) {
    auto qubit = ctx->qubit()->getText();
    auto clbit = "M" + clbit_counter;

    clbits[ctx->value()->getText()] = stoi(clbit_counter);

    auto new_line = "meas Q" + std::to_string(qubits[qubit]) + " " + clbit + "\n";
    current_file1 += new_line;
    current_file2 += (branched ?  new_line : "");

    new_line = "qfree Q" + std::to_string(qubits[qubit]) + "\n";
    current_file1 += new_line;
    current_file2 += (branched ?  new_line : "");

    augmentCounter(clbit_counter);
}

void InQuIRtoNetQASMListener::enterConditionalGate(InQuIRParser::ConditionalGateContext * ctx) {
    closeFile(false);
    augmentCounter(file_counter);
    branched = true;

    current_file1 += "# NETQASM 1.0\n";
    current_file1 += "# APPID 0\n";
    current_file2 += "# NETQASM 1.0\n";
    current_file2 += "# APPID 0\n";
}

void InQuIRtoNetQASMListener::exitConditionalGate(InQuIRParser::ConditionalGateContext * ctx) {
    // TODO: Add a map for the addresses to check they don't collide (now using the qubit_counter)
    auto qubit = "Q" + qubit_counter;
    
    current_file1 += "set " + qubit + " " + qubit_counter + "\n";
    applyQuantumGate(ctx->gate(), ctx->qubit());
}

void InQuIRtoNetQASMListener::exitSend(InQuIRParser::SendContext * ctx) {
    // TODO: Improve to be able to send multiple clbits (?) 
    auto clbit = clbits[ctx->value()->getText()];

    auto new_line = "array 1 @"  + array_counter + "\n";
    current_file1 += new_line;
    current_file2 += (branched ?  new_line : "");

    new_line = "store M" + std::to_string(clbit) + " @" + array_counter + "[0]\n";
    current_file1 += new_line;
    current_file2 += (branched ?  new_line : "");

    current_file_info += "send:\n";
    current_file_info += "\tprocess: " + ctx->participant()->getText() + "\n";
    current_file_info += "\tarray:\n";
    current_file_info += "\t\tname: " + array_counter + "\n";
    current_file_info += "\t\tposition: 0\n";

    augmentCounter(array_counter);
}