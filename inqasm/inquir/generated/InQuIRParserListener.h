
// Generated from InQuIRParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "InQuIRParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by InQuIRParser.
 */
class  InQuIRParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterMainprogram(InQuIRParser::MainprogramContext *ctx) = 0;
  virtual void exitMainprogram(InQuIRParser::MainprogramContext *ctx) = 0;

  virtual void enterSystem(InQuIRParser::SystemContext *ctx) = 0;
  virtual void exitSystem(InQuIRParser::SystemContext *ctx) = 0;

  virtual void enterProcess(InQuIRParser::ProcessContext *ctx) = 0;
  virtual void exitProcess(InQuIRParser::ProcessContext *ctx) = 0;

  virtual void enterFunctionLine(InQuIRParser::FunctionLineContext *ctx) = 0;
  virtual void exitFunctionLine(InQuIRParser::FunctionLineContext *ctx) = 0;

  virtual void enterQuantumInstructionLine(InQuIRParser::QuantumInstructionLineContext *ctx) = 0;
  virtual void exitQuantumInstructionLine(InQuIRParser::QuantumInstructionLineContext *ctx) = 0;

  virtual void enterOpen(InQuIRParser::OpenContext *ctx) = 0;
  virtual void exitOpen(InQuIRParser::OpenContext *ctx) = 0;

  virtual void enterClose(InQuIRParser::CloseContext *ctx) = 0;
  virtual void exitClose(InQuIRParser::CloseContext *ctx) = 0;

  virtual void enterInit(InQuIRParser::InitContext *ctx) = 0;
  virtual void exitInit(InQuIRParser::InitContext *ctx) = 0;

  virtual void enterFree(InQuIRParser::FreeContext *ctx) = 0;
  virtual void exitFree(InQuIRParser::FreeContext *ctx) = 0;

  virtual void enterMeasure(InQuIRParser::MeasureContext *ctx) = 0;
  virtual void exitMeasure(InQuIRParser::MeasureContext *ctx) = 0;

  virtual void enterGenEnt(InQuIRParser::GenEntContext *ctx) = 0;
  virtual void exitGenEnt(InQuIRParser::GenEntContext *ctx) = 0;

  virtual void enterEntSwap(InQuIRParser::EntSwapContext *ctx) = 0;
  virtual void exitEntSwap(InQuIRParser::EntSwapContext *ctx) = 0;

  virtual void enterRecv(InQuIRParser::RecvContext *ctx) = 0;
  virtual void exitRecv(InQuIRParser::RecvContext *ctx) = 0;

  virtual void enterSend(InQuIRParser::SendContext *ctx) = 0;
  virtual void exitSend(InQuIRParser::SendContext *ctx) = 0;

  virtual void enterRCXC(InQuIRParser::RCXCContext *ctx) = 0;
  virtual void exitRCXC(InQuIRParser::RCXCContext *ctx) = 0;

  virtual void enterRCXT(InQuIRParser::RCXTContext *ctx) = 0;
  virtual void exitRCXT(InQuIRParser::RCXTContext *ctx) = 0;

  virtual void enterUsualGate(InQuIRParser::UsualGateContext *ctx) = 0;
  virtual void exitUsualGate(InQuIRParser::UsualGateContext *ctx) = 0;

  virtual void enterConditionalGate(InQuIRParser::ConditionalGateContext *ctx) = 0;
  virtual void exitConditionalGate(InQuIRParser::ConditionalGateContext *ctx) = 0;

  virtual void enterExpression(InQuIRParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(InQuIRParser::ExpressionContext *ctx) = 0;

  virtual void enterValue(InQuIRParser::ValueContext *ctx) = 0;
  virtual void exitValue(InQuIRParser::ValueContext *ctx) = 0;

  virtual void enterGate(InQuIRParser::GateContext *ctx) = 0;
  virtual void exitGate(InQuIRParser::GateContext *ctx) = 0;

  virtual void enterSession(InQuIRParser::SessionContext *ctx) = 0;
  virtual void exitSession(InQuIRParser::SessionContext *ctx) = 0;

  virtual void enterParticipant(InQuIRParser::ParticipantContext *ctx) = 0;
  virtual void exitParticipant(InQuIRParser::ParticipantContext *ctx) = 0;

  virtual void enterLabel(InQuIRParser::LabelContext *ctx) = 0;
  virtual void exitLabel(InQuIRParser::LabelContext *ctx) = 0;

  virtual void enterQubit(InQuIRParser::QubitContext *ctx) = 0;
  virtual void exitQubit(InQuIRParser::QubitContext *ctx) = 0;


};

