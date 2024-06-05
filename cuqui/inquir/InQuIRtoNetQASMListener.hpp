#include "InQuIRParserBaseListener.h"
#include <vector>


class InQuIRtoNetQASMListener : public InQuIRParserBaseListener {
    std::vector<std::string> netqasm_files;
    std::string current_file;
    int current_file_num;
    
    // Check if it is a good practice
    int array_counter;
    int qubit_counter;
    int classical_counter;


public:
    explicit InQuIRtoNetQASMListener();

    void enterMainprogram(InQuIRParser::MainprogramContext * ctx) override;
    void exitMainprogram(InQuIRParser::MainprogramContext * ctx) override;

    void enterProcess(InQuIRParser::ProcessContext * ctx) override;
    void exitProcess(InQuIRParser::ProcessContext * ctx) override;
};