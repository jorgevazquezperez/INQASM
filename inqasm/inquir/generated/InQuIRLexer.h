
// Generated from InQuIRLexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  InQuIRLexer : public antlr4::Lexer {
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

  explicit InQuIRLexer(antlr4::CharStream *input);

  ~InQuIRLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

