#include "InQuIRtoNetQASMListener.hpp"

InQuIRtoNetQASMListener::InQuIRtoNetQASMListener() {
    current_file = "";
    current_file_num = 0;
    array_counter = "0";
    qubit_counter = "0";
    classical_counter = "0";
}

static void augment_counter(std::string &counter) {
    counter = std::to_string(stoi(counter) + 1);
}

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
    auto filename = "process_" + std::to_string(current_file_num) + ".nqasm";
    std::ofstream outFile(filename);

    if (outFile.is_open()) {
        outFile << current_file;
        outFile.close();

        netqasm_files.push_back(filename);
        current_file = "";
    } else {
        std::cerr << "Error opening file for writing." << std::endl;
    }
}

void InQuIRtoNetQASMListener::exitInit(InQuIRParser::InitContext * ctx) {
    auto qubit = "Q" + qubit_counter;
    current_file +=  qubit + " " + qubit_counter + "\n";
    current_file += "qalloc " + qubit + "\n";
    current_file += "init " + qubit + "\n";
    augment_counter(qubit_counter);
}

void InQuIRtoNetQASMListener::exitGenEnt(InQuIRParser::GenEntContext * ctx) {
    std::vector<std::string> arrays(3);
    for (auto i = 0; i < 3; i++) {
        arrays[i] = "@" + array_counter;
        augment_counter(array_counter);
    }
    
    // Array with hardcoded size for entanglement generation
    current_file += "array 10 " + arrays[0] + "\n";
    current_file += "array 1 "  + arrays[1] + "\n";
    current_file += "array 20 " + arrays[2] + "\n";
    current_file += "store 1 "  + arrays[1] + "[0]\n";
    current_file += "store 0 "  + arrays[2] + "[0]\n";
    current_file += "store 1 "  + arrays[2] + "[1]\n";

    auto epr_dest = ctx->participant()->getText();
    current_file += "create_epr(" + epr_dest + ", 0) 1 2 0\n";
}


