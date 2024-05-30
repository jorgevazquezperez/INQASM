
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

  virtual void enterInstruction(InQuIRParser::InstructionContext * /*ctx*/) override { }
  virtual void exitInstruction(InQuIRParser::InstructionContext * /*ctx*/) override { }

  virtual void enterFunction(InQuIRParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(InQuIRParser::FunctionContext * /*ctx*/) override { }

  virtual void enterQuantum_instruction(InQuIRParser::Quantum_instructionContext * /*ctx*/) override { }
  virtual void exitQuantum_instruction(InQuIRParser::Quantum_instructionContext * /*ctx*/) override { }

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

