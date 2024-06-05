#include "InQuIRtoNetQASMListener.hpp"

InQuIRtoNetQASMListener::InQuIRtoNetQASMListener() {
    netqasm_files = {""};
    current_file = "";
    current_file_num = 0;
    array_counter = 0;
    qubit_counter = 0;
    classical_counter = 0;
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

void exitInit(InQuIRParser::InitContext * ctx){
    
}


