#include "InQuIRtoNetQASMListener.hpp"

InQuIRtoNetQASMListener::InQuIRtoNetQASMListener() {
    netqasm_files = {""};
    current_file = "";
    current_file_num = 0;
}

void InQuIRtoNetQASMListener::enterMainprogram(InQuIRParser::MainprogramContext * ctx) {
    std::cout << "enterMainprogram" << std::endl;
}

void InQuIRtoNetQASMListener::exitMainprogram(InQuIRParser::MainprogramContext * ctx) {
    std::cout << "exitMainprogram" << std::endl;
}

void InQuIRtoNetQASMListener::enterProcess(InQuIRParser::ProcessContext * ctx) {
    std::cout << "enterProcess" << std::endl;
}

void InQuIRtoNetQASMListener::exitProcess(InQuIRParser::ProcessContext * ctx) {
    std::cout << "exitProcess" << std::endl;
}

void InQuIRtoNetQASMListener::exitInstruction(InQuIRParser::InstructionContext * ctx) {
    std::cout << "exitInstruction" << std::endl;
}

