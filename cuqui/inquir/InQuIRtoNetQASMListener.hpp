#include <vector>
#include <fstream>

#include "InQuIRParserBaseListener.h"
#include "InQuIRParser.h"


class InQuIRtoNetQASMListener : public InQuIRParserBaseListener {
private:
    std::vector<std::string> netqasm_files;
    std::string current_file1;
    std::string current_file2;
    std::string current_file_info;
    std::string current_process_num;
    
    std::unordered_map<std::string, int> qubits;
    std::unordered_map<std::string, int> clbits;

    // Check if it is a good practice
    std::string array_counter;
    std::string qubit_counter;
    std::string clbit_counter;
    std::string branches_counter;

    static const std::unordered_map<std::string, std::string> gate_equivalences;
    static void augmentCounter(std::string &counter);

    void closeFile(bool finish_process);

    void applyQuantumGate(InQuIRParser::GateContext *gate, std::vector<InQuIRParser::QubitContext *> gate_qubits);
public:
    explicit InQuIRtoNetQASMListener();

    void enterMainprogram(InQuIRParser::MainprogramContext * ctx) override;
    void exitMainprogram(InQuIRParser::MainprogramContext * ctx) override;

    void enterProcess(InQuIRParser::ProcessContext * ctx) override;
    void exitProcess(InQuIRParser::ProcessContext * ctx) override;
    
    void exitInit(InQuIRParser::InitContext * ctx) override;

    void exitGenEnt(InQuIRParser::GenEntContext * ctx) override;

    void exitUsualGate(InQuIRParser::UsualGateContext * ctx) override;
    void enterConditionalGate(InQuIRParser::ConditionalGateContext * ctx) override;
    void exitConditionalGate(InQuIRParser::ConditionalGateContext * ctx) override;

    void exitMeasure(InQuIRParser::MeasureContext * ctx) override;

    void exitSend(InQuIRParser::SendContext * ctx) override; 
};