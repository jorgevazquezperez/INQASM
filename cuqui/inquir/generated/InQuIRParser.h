
// Generated from InQuIRParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  InQuIRParser : public antlr4::Parser {
public:
  enum {
    OPEN = 1, CLOSE = 2, INIT = 3, FREE = 4, MEASURE = 5, GENENT = 6, ENTSWAP = 7, 
    RECV = 8, SEND = 9, RCXC = 10, RCXT = 11, H = 12, X = 13, Y = 14, Z = 15, 
    CX = 16, CZ = 17, SWAP = 18, ID = 19, REAL = 20, INT = 21, STRING = 22, 
    AND = 23, OR = 24, XOR = 25, IF = 26, ELSE = 27, THEN = 28, LCURLY = 29, 
    RCURLY = 30, LPAREN = 31, RPAREN = 32, LBRACK = 33, RBRACK = 34, COMMA = 35, 
    COLON = 36, SEMICOLON = 37, DOT = 38, VERT = 39, EQUAL = 40, EXCLAM = 41, 
    QUESTION = 42, WS = 43, EOL = 44
  };

  enum {
    RuleMainprogram = 0, RuleSystem = 1, RuleProcess = 2, RuleInstruction = 3, 
    RuleFunction = 4, RuleQuantum_instruction = 5, RuleExpression = 6, RuleValue = 7, 
    RuleGate = 8, RuleSession = 9, RuleParticipant = 10, RuleLabel = 11, 
    RuleQubit = 12
  };

  explicit InQuIRParser(antlr4::TokenStream *input);

  InQuIRParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~InQuIRParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class MainprogramContext;
  class SystemContext;
  class ProcessContext;
  class InstructionContext;
  class FunctionContext;
  class Quantum_instructionContext;
  class ExpressionContext;
  class ValueContext;
  class GateContext;
  class SessionContext;
  class ParticipantContext;
  class LabelContext;
  class QubitContext; 

  class  MainprogramContext : public antlr4::ParserRuleContext {
  public:
    MainprogramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SystemContext *system();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MainprogramContext* mainprogram();

  class  SystemContext : public antlr4::ParserRuleContext {
  public:
    SystemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<ProcessContext *> process();
    ProcessContext* process(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<SystemContext *> system();
    SystemContext* system(size_t i);
    antlr4::tree::TerminalNode *VERT();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SystemContext* system();

  class  ProcessContext : public antlr4::ParserRuleContext {
  public:
    ProcessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParticipantContext *participant();
    antlr4::tree::TerminalNode *LCURLY();
    antlr4::tree::TerminalNode *RCURLY();
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProcessContext* process();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionContext *function();
    antlr4::tree::TerminalNode *SEMICOLON();
    ValueContext *value();
    antlr4::tree::TerminalNode *EQUAL();
    ExpressionContext *expression();
    Quantum_instructionContext *quantum_instruction();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *THEN();
    std::vector<ProcessContext *> process();
    ProcessContext* process(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    SessionContext *session();
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *RBRACK();
    antlr4::tree::TerminalNode *EXCLAM();
    antlr4::tree::TerminalNode *LPAREN();
    LabelContext *label();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *QUESTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InstructionContext* instruction();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SessionContext *session();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *LBRACK();
    std::vector<ParticipantContext *> participant();
    ParticipantContext* participant(size_t i);
    antlr4::tree::TerminalNode *RBRACK();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *CLOSE();
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    antlr4::tree::TerminalNode *INIT();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    antlr4::tree::TerminalNode *FREE();
    antlr4::tree::TerminalNode *MEASURE();
    QubitContext *qubit();
    antlr4::tree::TerminalNode *GENENT();
    LabelContext *label();
    antlr4::tree::TerminalNode *ENTSWAP();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RECV();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *SEND();
    antlr4::tree::TerminalNode *RCXC();
    antlr4::tree::TerminalNode *RCXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionContext* function();

  class  Quantum_instructionContext : public antlr4::ParserRuleContext {
  public:
    Quantum_instructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GateContext *gate();
    std::vector<QubitContext *> qubit();
    QubitContext* qubit(size_t i);
    antlr4::tree::TerminalNode *LBRACK();
    ValueContext *value();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Quantum_instructionContext* quantum_instruction();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueContext *value();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *XOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QubitContext *qubit();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValueContext* value();

  class  GateContext : public antlr4::ParserRuleContext {
  public:
    GateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *X();
    antlr4::tree::TerminalNode *Y();
    antlr4::tree::TerminalNode *Z();
    antlr4::tree::TerminalNode *H();
    antlr4::tree::TerminalNode *CX();
    antlr4::tree::TerminalNode *CZ();
    antlr4::tree::TerminalNode *SWAP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GateContext* gate();

  class  SessionContext : public antlr4::ParserRuleContext {
  public:
    SessionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SessionContext* session();

  class  ParticipantContext : public antlr4::ParserRuleContext {
  public:
    ParticipantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParticipantContext* participant();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabelContext* label();

  class  QubitContext : public antlr4::ParserRuleContext {
  public:
    QubitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QubitContext* qubit();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

