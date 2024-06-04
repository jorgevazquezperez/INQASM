#include "InQuIRParserBaseListener.h"
#include <vector>


class InQuIRtoNetQASMListener : public InQuIRParserBaseListener {
    std::vector<std::string> netqasm_files;
    std::string current_file;
    int current_file_num;


public:
    explicit InQuIRtoNetQASMListener();

    void enterMainprogram(InQuIRParser::MainprogramContext * ctx) override;
    void exitMainprogram(InQuIRParser::MainprogramContext * ctx) override;

    void enterProcess(InQuIRParser::ProcessContext * ctx) override;
    void exitProcess(InQuIRParser::ProcessContext * ctx) override;

    void exitInstruction(InQuIRParser::InstructionContext * ctx) override;
};