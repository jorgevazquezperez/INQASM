#include "InQuIRParserBaseListener.h"
#include <vector>
#include <fstream>


class InQuIRtoNetQASMListener : public InQuIRParserBaseListener {
    std::vector<std::string> netqasm_files;
    std::string current_file;
    int current_file_num;
    
    // Check if it is a good practice
    std::string array_counter;
    std::string qubit_counter;
    std::string classical_counter;


public:
    explicit InQuIRtoNetQASMListener();

    void enterMainprogram(InQuIRParser::MainprogramContext * ctx) override;
    void exitMainprogram(InQuIRParser::MainprogramContext * ctx) override;

    void enterProcess(InQuIRParser::ProcessContext * ctx) override;
    void exitProcess(InQuIRParser::ProcessContext * ctx) override;
    
    void exitInit(InQuIRParser::InitContext * ctx) override;
    void exitGenEnt(InQuIRParser::GenEntContext * ctx) override;
};