
// Generated from InQuIRParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "InQuIRParserListener.h"


/**
 * This class provides an empty implementation of InQuIRParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  InQuIRParserBaseListener : public InQuIRParserListener {
public:

  virtual void enterMainprogram(InQuIRParser::MainprogramContext * /*ctx*/) override { }
  virtual void exitMainprogram(InQuIRParser::MainprogramContext * /*ctx*/) override { }

  virtual void enterSystem(InQuIRParser::SystemContext * /*ctx*/) override { }
  virtual void exitSystem(InQuIRParser::SystemContext * /*ctx*/) override { }

  virtual void enterProcess(InQuIRParser::ProcessContext * /*ctx*/) override { }
  virtual void exitProcess(InQuIRParser::ProcessContext * /*ctx*/) override { }

  virtual void enterFunctionLine(InQuIRParser::FunctionLineContext * /*ctx*/) override { }
  virtual void exitFunctionLine(InQuIRParser::FunctionLineContext * /*ctx*/) override { }

  virtual void enterQuantumInstructionLine(InQuIRParser::QuantumInstructionLineContext * /*ctx*/) override { }
  virtual void exitQuantumInstructionLine(InQuIRParser::QuantumInstructionLineContext * /*ctx*/) override { }

  virtual void enterOpen(InQuIRParser::OpenContext * /*ctx*/) override { }
  virtual void exitOpen(InQuIRParser::OpenContext * /*ctx*/) override { }

  virtual void enterClose(InQuIRParser::CloseContext * /*ctx*/) override { }
  virtual void exitClose(InQuIRParser::CloseContext * /*ctx*/) override { }

  virtual void enterInit(InQuIRParser::InitContext * /*ctx*/) override { }
  virtual void exitInit(InQuIRParser::InitContext * /*ctx*/) override { }

  virtual void enterFree(InQuIRParser::FreeContext * /*ctx*/) override { }
  virtual void exitFree(InQuIRParser::FreeContext * /*ctx*/) override { }

  virtual void enterMeasure(InQuIRParser::MeasureContext * /*ctx*/) override { }
  virtual void exitMeasure(InQuIRParser::MeasureContext * /*ctx*/) override { }

  virtual void enterGenEnt(InQuIRParser::GenEntContext * /*ctx*/) override { }
  virtual void exitGenEnt(InQuIRParser::GenEntContext * /*ctx*/) override { }

  virtual void enterEntSwap(InQuIRParser::EntSwapContext * /*ctx*/) override { }
  virtual void exitEntSwap(InQuIRParser::EntSwapContext * /*ctx*/) override { }

  virtual void enterRecv(InQuIRParser::RecvContext * /*ctx*/) override { }
  virtual void exitRecv(InQuIRParser::RecvContext * /*ctx*/) override { }

  virtual void enterSend(InQuIRParser::SendContext * /*ctx*/) override { }
  virtual void exitSend(InQuIRParser::SendContext * /*ctx*/) override { }

  virtual void enterRCXC(InQuIRParser::RCXCContext * /*ctx*/) override { }
  virtual void exitRCXC(InQuIRParser::RCXCContext * /*ctx*/) override { }

  virtual void enterRCXT(InQuIRParser::RCXTContext * /*ctx*/) override { }
  virtual void exitRCXT(InQuIRParser::RCXTContext * /*ctx*/) override { }

  virtual void enterUsualGate(InQuIRParser::UsualGateContext * /*ctx*/) override { }
  virtual void exitUsualGate(InQuIRParser::UsualGateContext * /*ctx*/) override { }

  virtual void enterConditionalGate(InQuIRParser::ConditionalGateContext * /*ctx*/) override { }
  virtual void exitConditionalGate(InQuIRParser::ConditionalGateContext * /*ctx*/) override { }

  virtual void enterExpression(InQuIRParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(InQuIRParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterValue(InQuIRParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(InQuIRParser::ValueContext * /*ctx*/) override { }

  virtual void enterGate(InQuIRParser::GateContext * /*ctx*/) override { }
  virtual void exitGate(InQuIRParser::GateContext * /*ctx*/) override { }

  virtual void enterSession(InQuIRParser::SessionContext * /*ctx*/) override { }
  virtual void exitSession(InQuIRParser::SessionContext * /*ctx*/) override { }

  virtual void enterParticipant(InQuIRParser::ParticipantContext * /*ctx*/) override { }
  virtual void exitParticipant(InQuIRParser::ParticipantContext * /*ctx*/) override { }

  virtual void enterLabel(InQuIRParser::LabelContext * /*ctx*/) override { }
  virtual void exitLabel(InQuIRParser::LabelContext * /*ctx*/) override { }

  virtual void enterQubit(InQuIRParser::QubitContext * /*ctx*/) override { }
  virtual void exitQubit(InQuIRParser::QubitContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

