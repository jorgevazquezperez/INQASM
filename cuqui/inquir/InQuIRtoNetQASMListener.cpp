#include "InQuIRtoNetQASMListener.hpp"

InQuIRtoNetQASMListener::InQuIRtoNetQASMListener() {
    current_file = "";
    current_file_num = 0;

    array_counter = "0";
    qubit_counter = "0";
    clbit_counter = "0";
    branches_counter = "0";
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
        current_file += "ret_arr @" + std::to_string(i) + "\n";
    }

    std::string filename; 
    std::cout << branches_counter << std::endl;
    if(stoi(branches_counter) > 0){
        filename = "process_" + std::to_string(current_file_num) + "_" + branches_counter + ".nqasm";
    } else {
        filename = "process_" + std::to_string(current_file_num) + ".nqasm";
    }
    
    std::ofstream outFile(filename);

    if (outFile.is_open()) {
        outFile << current_file;
        outFile.close();

        netqasm_files.push_back(filename);
        current_file = "";
        array_counter = "0";
        qubit_counter = "0";
        clbit_counter = "0";
        if(finish_process){
            branches_counter = "0";
        }
    } else {
        std::cerr << "Error opening file for writing." << std::endl;
    }
}

void InQuIRtoNetQASMListener::applyQuantumGate(InQuIRParser::GateContext *gate, std::vector<InQuIRParser::QubitContext *> gate_qubits) {
    std::string gate_name = gate->getText();
    current_file += gate_equivalences.at(gate_name) + " " ;
    for(auto qubit: gate_qubits){
        current_file += "Q" + std::to_string(qubits[qubit->getText()]) + " ";
    }
    current_file += "\n";
}

// ------------------- Listener methods -------------------

void InQuIRtoNetQASMListener::enterMainprogram(InQuIRParser::MainprogramContext * ctx) {
    std::cout << "enterMainprogram" << std::endl;
}

void InQuIRtoNetQASMListener::exitMainprogram(InQuIRParser::MainprogramContext * ctx) {
    std::cout << "exitMainprogram" << std::endl;
}

void InQuIRtoNetQASMListener::enterProcess(InQuIRParser::ProcessContext * ctx) {
    current_file_num = stoi(ctx->participant()->getText());
}

void InQuIRtoNetQASMListener::exitProcess(InQuIRParser::ProcessContext * ctx){
    augmentCounter(branches_counter);
    closeFile(true);
}

void InQuIRtoNetQASMListener::exitInit(InQuIRParser::InitContext * ctx) {
    auto qubit = "Q" + qubit_counter;
    current_file += "set " + qubit + " " + qubit_counter + "\n";
    current_file += "qalloc " + qubit + "\n";
    current_file += "init " + qubit + "\n";

    qubits[ctx->value()->getText()] = stoi(qubit_counter);
    augmentCounter(qubit_counter);
}

void InQuIRtoNetQASMListener::exitGenEnt(InQuIRParser::GenEntContext * ctx) {
    auto qubit = "Q" + qubit_counter;
    current_file += "set " + qubit + " " + qubit_counter + "\n";
    current_file += "qalloc " + qubit + "\n";
    current_file += "init " + qubit + "\n";
    
    qubits[ctx->value()->getText()] = stoi(qubit_counter);

    std::vector<std::string> arrays(3);
    for (auto i = 0; i < 3; i++) {
        arrays[i] = "@" + array_counter;
        augmentCounter(array_counter);
    }
    
    // Arrays with hardcoded size for entanglement generation, should be changed to accept various pairs
    current_file += "array 10 " + arrays[0] + "\n";
    current_file += "array 1 "  + arrays[1] + "\n";
    current_file += "array 20 " + arrays[2] + "\n";
    current_file += "store " + qubit_counter + " " + arrays[1] + "\n";
    current_file += "store 0 "  + arrays[2] + "[0]\n";
    current_file += "store 1 "  + arrays[2] + "[1]\n";

    auto epr_dest = ctx->participant()->getText();
    current_file += "create_epr(" + epr_dest + ", 0) 1 2 0\n";
    current_file += "wait_all " + arrays[0] + "[0:10]\n";

    augmentCounter(qubit_counter);
}

void InQuIRtoNetQASMListener::exitUsualGate(InQuIRParser::UsualGateContext * ctx) {
    applyQuantumGate(ctx->gate(), ctx->qubit());
}


void InQuIRtoNetQASMListener::exitMeasure(InQuIRParser::MeasureContext * ctx) {
    auto qubit = ctx->qubit()->getText();
    auto clbit = "M" + clbit_counter;

    clbits[ctx->value()->getText()] = stoi(qubit_counter);

    current_file += "meas Q" + std::to_string(qubits[qubit]) + " " + clbit + "\n";
    current_file += "qfree Q" + std::to_string(qubits[qubit]) + "\n";

    current_file += "array 1 @"  + array_counter + "\n";
    current_file += "store " + clbit + " @" + array_counter + "[0]\n";

    augmentCounter(clbit_counter);
    augmentCounter(array_counter);
}

void InQuIRtoNetQASMListener::enterConditionalGate(InQuIRParser::ConditionalGateContext * ctx) {
    augmentCounter(branches_counter);
    closeFile(false);
}

void InQuIRtoNetQASMListener::exitConditionalGate(InQuIRParser::ConditionalGateContext * ctx) {
    // TODO: Add a map for the addresses to check they don't collide (now using the qubit_counter)
    auto qubit = "Q" + qubit_counter;
    current_file += "set " + qubit + " " + qubit_counter + "\n";
    applyQuantumGate(ctx->gate(), ctx->qubit());
}