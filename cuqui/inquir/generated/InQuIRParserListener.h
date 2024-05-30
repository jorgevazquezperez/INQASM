
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

  virtual void enterInstruction(InQuIRParser::InstructionContext *ctx) = 0;
  virtual void exitInstruction(InQuIRParser::InstructionContext *ctx) = 0;

  virtual void enterFunction(InQuIRParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(InQuIRParser::FunctionContext *ctx) = 0;

  virtual void enterQuantum_instruction(InQuIRParser::Quantum_instructionContext *ctx) = 0;
  virtual void exitQuantum_instruction(InQuIRParser::Quantum_instructionContext *ctx) = 0;

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

