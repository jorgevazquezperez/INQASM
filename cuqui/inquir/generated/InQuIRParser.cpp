
// Generated from InQuIRParser.g4 by ANTLR 4.13.1


#include "InQuIRParserListener.h"

#include "InQuIRParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct InQuIRParserStaticData final {
  InQuIRParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  InQuIRParserStaticData(const InQuIRParserStaticData&) = delete;
  InQuIRParserStaticData(InQuIRParserStaticData&&) = delete;
  InQuIRParserStaticData& operator=(const InQuIRParserStaticData&) = delete;
  InQuIRParserStaticData& operator=(InQuIRParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag inquirparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
InQuIRParserStaticData *inquirparserParserStaticData = nullptr;

void inquirparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (inquirparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(inquirparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<InQuIRParserStaticData>(
    std::vector<std::string>{
      "mainprogram", "system", "process", "instruction", "function", "quantum_instruction", 
      "expression", "value", "gate", "session", "participant", "label", 
      "qubit"
    },
    std::vector<std::string>{
      "", "'open'", "'close'", "'init'", "'free'", "", "'genEnt'", "'entSwap'", 
      "'recv'", "'send'", "'rcxc'", "'rcxt'", "'H'", "'X'", "'Y'", "'Z'", 
      "'CX'", "'CZ'", "'SWAP'", "", "", "", "", "'&&'", "'||'", "'^'", "'if'", 
      "'else'", "'then'", "'{'", "'}'", "'('", "')'", "'['", "']'", "','", 
      "':'", "';'", "'.'", "'|'", "'='", "'!'", "'\\u003F'"
    },
    std::vector<std::string>{
      "", "OPEN", "CLOSE", "INIT", "FREE", "MEASURE", "GENENT", "ENTSWAP", 
      "RECV", "SEND", "RCXC", "RCXT", "H", "X", "Y", "Z", "CX", "CZ", "SWAP", 
      "ID", "REAL", "INT", "STRING", "AND", "OR", "XOR", "IF", "ELSE", "THEN", 
      "LCURLY", "RCURLY", "LPAREN", "RPAREN", "LBRACK", "RBRACK", "COMMA", 
      "COLON", "SEMICOLON", "DOT", "VERT", "EQUAL", "EXCLAM", "QUESTION", 
      "WS", "EOL"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,44,257,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,1,0,1,0,1,1,5,1,30,
  	8,1,10,1,12,1,33,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,43,8,1,1,2,1,
  	2,1,2,5,2,48,8,2,10,2,12,2,51,9,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,94,8,3,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,103,8,4,10,4,12,4,106,9,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,197,
  	8,4,1,5,1,5,1,5,5,5,202,8,5,10,5,12,5,205,9,5,1,5,1,5,1,5,1,5,1,5,1,5,
  	5,5,213,8,5,10,5,12,5,216,9,5,3,5,218,8,5,1,6,1,6,1,6,1,6,1,6,1,6,3,6,
  	226,8,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,5,6,237,8,6,10,6,12,6,240,
  	9,6,1,7,1,7,1,7,3,7,245,8,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,
  	1,12,1,12,0,1,12,13,0,2,4,6,8,10,12,14,16,18,20,22,24,0,1,1,0,12,18,271,
  	0,26,1,0,0,0,2,42,1,0,0,0,4,44,1,0,0,0,6,93,1,0,0,0,8,196,1,0,0,0,10,
  	217,1,0,0,0,12,225,1,0,0,0,14,244,1,0,0,0,16,246,1,0,0,0,18,248,1,0,0,
  	0,20,250,1,0,0,0,22,252,1,0,0,0,24,254,1,0,0,0,26,27,3,2,1,0,27,1,1,0,
  	0,0,28,30,3,4,2,0,29,28,1,0,0,0,30,33,1,0,0,0,31,29,1,0,0,0,31,32,1,0,
  	0,0,32,34,1,0,0,0,33,31,1,0,0,0,34,43,5,0,0,1,35,36,5,31,0,0,36,37,3,
  	2,1,0,37,38,5,39,0,0,38,39,3,2,1,0,39,40,5,32,0,0,40,41,5,0,0,1,41,43,
  	1,0,0,0,42,31,1,0,0,0,42,35,1,0,0,0,43,3,1,0,0,0,44,45,3,20,10,0,45,49,
  	5,29,0,0,46,48,3,6,3,0,47,46,1,0,0,0,48,51,1,0,0,0,49,47,1,0,0,0,49,50,
  	1,0,0,0,50,52,1,0,0,0,51,49,1,0,0,0,52,53,5,30,0,0,53,5,1,0,0,0,54,55,
  	3,8,4,0,55,56,5,37,0,0,56,94,1,0,0,0,57,58,3,14,7,0,58,59,5,40,0,0,59,
  	60,3,12,6,0,60,61,5,37,0,0,61,94,1,0,0,0,62,63,3,10,5,0,63,64,5,37,0,
  	0,64,94,1,0,0,0,65,66,5,26,0,0,66,67,3,12,6,0,67,68,5,28,0,0,68,69,3,
  	4,2,0,69,70,5,27,0,0,70,71,3,4,2,0,71,94,1,0,0,0,72,73,3,18,9,0,73,74,
  	5,33,0,0,74,75,3,4,2,0,75,76,5,34,0,0,76,77,5,41,0,0,77,78,5,31,0,0,78,
  	79,3,22,11,0,79,80,5,36,0,0,80,81,3,12,6,0,81,82,5,32,0,0,82,83,5,37,
  	0,0,83,94,1,0,0,0,84,85,3,18,9,0,85,86,5,42,0,0,86,87,5,31,0,0,87,88,
  	3,22,11,0,88,89,5,36,0,0,89,90,3,12,6,0,90,91,5,32,0,0,91,92,5,37,0,0,
  	92,94,1,0,0,0,93,54,1,0,0,0,93,57,1,0,0,0,93,62,1,0,0,0,93,65,1,0,0,0,
  	93,72,1,0,0,0,93,84,1,0,0,0,94,7,1,0,0,0,95,96,3,18,9,0,96,97,5,40,0,
  	0,97,98,5,1,0,0,98,99,5,33,0,0,99,104,3,20,10,0,100,101,5,35,0,0,101,
  	103,3,20,10,0,102,100,1,0,0,0,103,106,1,0,0,0,104,102,1,0,0,0,104,105,
  	1,0,0,0,105,107,1,0,0,0,106,104,1,0,0,0,107,108,5,34,0,0,108,197,1,0,
  	0,0,109,110,5,2,0,0,110,197,3,18,9,0,111,112,3,14,7,0,112,113,5,40,0,
  	0,113,114,5,3,0,0,114,115,5,31,0,0,115,116,5,32,0,0,116,197,1,0,0,0,117,
  	118,5,4,0,0,118,197,3,14,7,0,119,120,3,14,7,0,120,121,5,40,0,0,121,122,
  	5,5,0,0,122,123,3,24,12,0,123,197,1,0,0,0,124,125,3,14,7,0,125,126,5,
  	40,0,0,126,127,5,6,0,0,127,128,5,33,0,0,128,129,3,20,10,0,129,130,5,34,
  	0,0,130,131,5,31,0,0,131,132,3,22,11,0,132,133,5,32,0,0,133,197,1,0,0,
  	0,134,135,5,31,0,0,135,136,3,14,7,0,136,137,5,35,0,0,137,138,3,14,7,0,
  	138,139,5,32,0,0,139,140,5,40,0,0,140,141,5,7,0,0,141,142,5,31,0,0,142,
  	143,3,12,6,0,143,144,5,35,0,0,144,145,3,12,6,0,145,146,5,32,0,0,146,197,
  	1,0,0,0,147,148,5,8,0,0,148,149,5,31,0,0,149,150,3,18,9,0,150,151,5,35,
  	0,0,151,152,3,22,11,0,152,153,5,36,0,0,153,154,3,14,7,0,154,155,5,32,
  	0,0,155,197,1,0,0,0,156,157,5,9,0,0,157,158,5,33,0,0,158,159,3,20,10,
  	0,159,160,5,34,0,0,160,161,5,31,0,0,161,162,3,18,9,0,162,163,5,35,0,0,
  	163,164,3,22,11,0,164,165,5,36,0,0,165,166,3,14,7,0,166,167,5,32,0,0,
  	167,197,1,0,0,0,168,169,5,10,0,0,169,170,5,33,0,0,170,171,3,20,10,0,171,
  	172,5,34,0,0,172,173,5,31,0,0,173,174,3,18,9,0,174,175,5,35,0,0,175,176,
  	3,22,11,0,176,177,5,35,0,0,177,178,3,12,6,0,178,179,5,35,0,0,179,180,
  	3,12,6,0,180,181,5,32,0,0,181,197,1,0,0,0,182,183,5,11,0,0,183,184,5,
  	33,0,0,184,185,3,20,10,0,185,186,5,34,0,0,186,187,5,31,0,0,187,188,3,
  	18,9,0,188,189,5,35,0,0,189,190,3,22,11,0,190,191,5,35,0,0,191,192,3,
  	12,6,0,192,193,5,35,0,0,193,194,3,12,6,0,194,195,5,32,0,0,195,197,1,0,
  	0,0,196,95,1,0,0,0,196,109,1,0,0,0,196,111,1,0,0,0,196,117,1,0,0,0,196,
  	119,1,0,0,0,196,124,1,0,0,0,196,134,1,0,0,0,196,147,1,0,0,0,196,156,1,
  	0,0,0,196,168,1,0,0,0,196,182,1,0,0,0,197,9,1,0,0,0,198,199,3,16,8,0,
  	199,203,3,24,12,0,200,202,3,24,12,0,201,200,1,0,0,0,202,205,1,0,0,0,203,
  	201,1,0,0,0,203,204,1,0,0,0,204,218,1,0,0,0,205,203,1,0,0,0,206,207,3,
  	16,8,0,207,208,5,33,0,0,208,209,3,14,7,0,209,210,5,34,0,0,210,214,3,24,
  	12,0,211,213,3,24,12,0,212,211,1,0,0,0,213,216,1,0,0,0,214,212,1,0,0,
  	0,214,215,1,0,0,0,215,218,1,0,0,0,216,214,1,0,0,0,217,198,1,0,0,0,217,
  	206,1,0,0,0,218,11,1,0,0,0,219,220,6,6,-1,0,220,226,3,14,7,0,221,222,
  	5,31,0,0,222,223,3,12,6,0,223,224,5,32,0,0,224,226,1,0,0,0,225,219,1,
  	0,0,0,225,221,1,0,0,0,226,238,1,0,0,0,227,228,10,4,0,0,228,229,5,23,0,
  	0,229,237,3,12,6,5,230,231,10,3,0,0,231,232,5,24,0,0,232,237,3,12,6,4,
  	233,234,10,2,0,0,234,235,5,25,0,0,235,237,3,12,6,3,236,227,1,0,0,0,236,
  	230,1,0,0,0,236,233,1,0,0,0,237,240,1,0,0,0,238,236,1,0,0,0,238,239,1,
  	0,0,0,239,13,1,0,0,0,240,238,1,0,0,0,241,245,3,24,12,0,242,245,5,21,0,
  	0,243,245,5,19,0,0,244,241,1,0,0,0,244,242,1,0,0,0,244,243,1,0,0,0,245,
  	15,1,0,0,0,246,247,7,0,0,0,247,17,1,0,0,0,248,249,5,19,0,0,249,19,1,0,
  	0,0,250,251,5,21,0,0,251,21,1,0,0,0,252,253,5,19,0,0,253,23,1,0,0,0,254,
  	255,5,19,0,0,255,25,1,0,0,0,13,31,42,49,93,104,196,203,214,217,225,236,
  	238,244
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  inquirparserParserStaticData = staticData.release();
}

}

InQuIRParser::InQuIRParser(TokenStream *input) : InQuIRParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

InQuIRParser::InQuIRParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  InQuIRParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *inquirparserParserStaticData->atn, inquirparserParserStaticData->decisionToDFA, inquirparserParserStaticData->sharedContextCache, options);
}

InQuIRParser::~InQuIRParser() {
  delete _interpreter;
}

const atn::ATN& InQuIRParser::getATN() const {
  return *inquirparserParserStaticData->atn;
}

std::string InQuIRParser::getGrammarFileName() const {
  return "InQuIRParser.g4";
}

const std::vector<std::string>& InQuIRParser::getRuleNames() const {
  return inquirparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& InQuIRParser::getVocabulary() const {
  return inquirparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView InQuIRParser::getSerializedATN() const {
  return inquirparserParserStaticData->serializedATN;
}


//----------------- MainprogramContext ------------------------------------------------------------------

InQuIRParser::MainprogramContext::MainprogramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

InQuIRParser::SystemContext* InQuIRParser::MainprogramContext::system() {
  return getRuleContext<InQuIRParser::SystemContext>(0);
}


size_t InQuIRParser::MainprogramContext::getRuleIndex() const {
  return InQuIRParser::RuleMainprogram;
}

void InQuIRParser::MainprogramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMainprogram(this);
}

void InQuIRParser::MainprogramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMainprogram(this);
}

InQuIRParser::MainprogramContext* InQuIRParser::mainprogram() {
  MainprogramContext *_localctx = _tracker.createInstance<MainprogramContext>(_ctx, getState());
  enterRule(_localctx, 0, InQuIRParser::RuleMainprogram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(26);
    system();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SystemContext ------------------------------------------------------------------

InQuIRParser::SystemContext::SystemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* InQuIRParser::SystemContext::EOF() {
  return getToken(InQuIRParser::EOF, 0);
}

std::vector<InQuIRParser::ProcessContext *> InQuIRParser::SystemContext::process() {
  return getRuleContexts<InQuIRParser::ProcessContext>();
}

InQuIRParser::ProcessContext* InQuIRParser::SystemContext::process(size_t i) {
  return getRuleContext<InQuIRParser::ProcessContext>(i);
}

tree::TerminalNode* InQuIRParser::SystemContext::LPAREN() {
  return getToken(InQuIRParser::LPAREN, 0);
}

std::vector<InQuIRParser::SystemContext *> InQuIRParser::SystemContext::system() {
  return getRuleContexts<InQuIRParser::SystemContext>();
}

InQuIRParser::SystemContext* InQuIRParser::SystemContext::system(size_t i) {
  return getRuleContext<InQuIRParser::SystemContext>(i);
}

tree::TerminalNode* InQuIRParser::SystemContext::VERT() {
  return getToken(InQuIRParser::VERT, 0);
}

tree::TerminalNode* InQuIRParser::SystemContext::RPAREN() {
  return getToken(InQuIRParser::RPAREN, 0);
}


size_t InQuIRParser::SystemContext::getRuleIndex() const {
  return InQuIRParser::RuleSystem;
}

void InQuIRParser::SystemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSystem(this);
}

void InQuIRParser::SystemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSystem(this);
}

InQuIRParser::SystemContext* InQuIRParser::system() {
  SystemContext *_localctx = _tracker.createInstance<SystemContext>(_ctx, getState());
  enterRule(_localctx, 2, InQuIRParser::RuleSystem);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(42);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case InQuIRParser::EOF:
      case InQuIRParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(31);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == InQuIRParser::INT) {
          setState(28);
          process();
          setState(33);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(34);
        match(InQuIRParser::EOF);
        break;
      }

      case InQuIRParser::LPAREN: {
        enterOuterAlt(_localctx, 2);
        setState(35);
        match(InQuIRParser::LPAREN);
        setState(36);
        system();
        setState(37);
        match(InQuIRParser::VERT);
        setState(38);
        system();
        setState(39);
        match(InQuIRParser::RPAREN);
        setState(40);
        match(InQuIRParser::EOF);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcessContext ------------------------------------------------------------------

InQuIRParser::ProcessContext::ProcessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

InQuIRParser::ParticipantContext* InQuIRParser::ProcessContext::participant() {
  return getRuleContext<InQuIRParser::ParticipantContext>(0);
}

tree::TerminalNode* InQuIRParser::ProcessContext::LCURLY() {
  return getToken(InQuIRParser::LCURLY, 0);
}

tree::TerminalNode* InQuIRParser::ProcessContext::RCURLY() {
  return getToken(InQuIRParser::RCURLY, 0);
}

std::vector<InQuIRParser::InstructionContext *> InQuIRParser::ProcessContext::instruction() {
  return getRuleContexts<InQuIRParser::InstructionContext>();
}

InQuIRParser::InstructionContext* InQuIRParser::ProcessContext::instruction(size_t i) {
  return getRuleContext<InQuIRParser::InstructionContext>(i);
}


size_t InQuIRParser::ProcessContext::getRuleIndex() const {
  return InQuIRParser::RuleProcess;
}

void InQuIRParser::ProcessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProcess(this);
}

void InQuIRParser::ProcessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProcess(this);
}

InQuIRParser::ProcessContext* InQuIRParser::process() {
  ProcessContext *_localctx = _tracker.createInstance<ProcessContext>(_ctx, getState());
  enterRule(_localctx, 4, InQuIRParser::RuleProcess);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    participant();
    setState(45);
    match(InQuIRParser::LCURLY);
    setState(49);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2217738004) != 0)) {
      setState(46);
      instruction();
      setState(51);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(52);
    match(InQuIRParser::RCURLY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

InQuIRParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

InQuIRParser::FunctionContext* InQuIRParser::InstructionContext::function() {
  return getRuleContext<InQuIRParser::FunctionContext>(0);
}

tree::TerminalNode* InQuIRParser::InstructionContext::SEMICOLON() {
  return getToken(InQuIRParser::SEMICOLON, 0);
}

InQuIRParser::ValueContext* InQuIRParser::InstructionContext::value() {
  return getRuleContext<InQuIRParser::ValueContext>(0);
}

tree::TerminalNode* InQuIRParser::InstructionContext::EQUAL() {
  return getToken(InQuIRParser::EQUAL, 0);
}

InQuIRParser::ExpressionContext* InQuIRParser::InstructionContext::expression() {
  return getRuleContext<InQuIRParser::ExpressionContext>(0);
}

InQuIRParser::Quantum_instructionContext* InQuIRParser::InstructionContext::quantum_instruction() {
  return getRuleContext<InQuIRParser::Quantum_instructionContext>(0);
}

tree::TerminalNode* InQuIRParser::InstructionContext::IF() {
  return getToken(InQuIRParser::IF, 0);
}

tree::TerminalNode* InQuIRParser::InstructionContext::THEN() {
  return getToken(InQuIRParser::THEN, 0);
}

std::vector<InQuIRParser::ProcessContext *> InQuIRParser::InstructionContext::process() {
  return getRuleContexts<InQuIRParser::ProcessContext>();
}

InQuIRParser::ProcessContext* InQuIRParser::InstructionContext::process(size_t i) {
  return getRuleContext<InQuIRParser::ProcessContext>(i);
}

tree::TerminalNode* InQuIRParser::InstructionContext::ELSE() {
  return getToken(InQuIRParser::ELSE, 0);
}

InQuIRParser::SessionContext* InQuIRParser::InstructionContext::session() {
  return getRuleContext<InQuIRParser::SessionContext>(0);
}

tree::TerminalNode* InQuIRParser::InstructionContext::LBRACK() {
  return getToken(InQuIRParser::LBRACK, 0);
}

tree::TerminalNode* InQuIRParser::InstructionContext::RBRACK() {
  return getToken(InQuIRParser::RBRACK, 0);
}

tree::TerminalNode* InQuIRParser::InstructionContext::EXCLAM() {
  return getToken(InQuIRParser::EXCLAM, 0);
}

tree::TerminalNode* InQuIRParser::InstructionContext::LPAREN() {
  return getToken(InQuIRParser::LPAREN, 0);
}

InQuIRParser::LabelContext* InQuIRParser::InstructionContext::label() {
  return getRuleContext<InQuIRParser::LabelContext>(0);
}

tree::TerminalNode* InQuIRParser::InstructionContext::COLON() {
  return getToken(InQuIRParser::COLON, 0);
}

tree::TerminalNode* InQuIRParser::InstructionContext::RPAREN() {
  return getToken(InQuIRParser::RPAREN, 0);
}

tree::TerminalNode* InQuIRParser::InstructionContext::QUESTION() {
  return getToken(InQuIRParser::QUESTION, 0);
}


size_t InQuIRParser::InstructionContext::getRuleIndex() const {
  return InQuIRParser::RuleInstruction;
}

void InQuIRParser::InstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstruction(this);
}

void InQuIRParser::InstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstruction(this);
}

InQuIRParser::InstructionContext* InQuIRParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 6, InQuIRParser::RuleInstruction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(93);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(54);
      function();
      setState(55);
      match(InQuIRParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(57);
      value();
      setState(58);
      match(InQuIRParser::EQUAL);
      setState(59);
      expression(0);
      setState(60);
      match(InQuIRParser::SEMICOLON);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(62);
      quantum_instruction();
      setState(63);
      match(InQuIRParser::SEMICOLON);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(65);
      match(InQuIRParser::IF);
      setState(66);
      expression(0);
      setState(67);
      match(InQuIRParser::THEN);
      setState(68);
      process();
      setState(69);
      match(InQuIRParser::ELSE);
      setState(70);
      process();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(72);
      session();
      setState(73);
      match(InQuIRParser::LBRACK);
      setState(74);
      process();
      setState(75);
      match(InQuIRParser::RBRACK);
      setState(76);
      match(InQuIRParser::EXCLAM);
      setState(77);
      match(InQuIRParser::LPAREN);
      setState(78);
      label();
      setState(79);
      match(InQuIRParser::COLON);
      setState(80);
      expression(0);
      setState(81);
      match(InQuIRParser::RPAREN);
      setState(82);
      match(InQuIRParser::SEMICOLON);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(84);
      session();
      setState(85);
      match(InQuIRParser::QUESTION);
      setState(86);
      match(InQuIRParser::LPAREN);
      setState(87);
      label();
      setState(88);
      match(InQuIRParser::COLON);
      setState(89);
      expression(0);
      setState(90);
      match(InQuIRParser::RPAREN);
      setState(91);
      match(InQuIRParser::SEMICOLON);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

InQuIRParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

InQuIRParser::SessionContext* InQuIRParser::FunctionContext::session() {
  return getRuleContext<InQuIRParser::SessionContext>(0);
}

tree::TerminalNode* InQuIRParser::FunctionContext::EQUAL() {
  return getToken(InQuIRParser::EQUAL, 0);
}

tree::TerminalNode* InQuIRParser::FunctionContext::OPEN() {
  return getToken(InQuIRParser::OPEN, 0);
}

tree::TerminalNode* InQuIRParser::FunctionContext::LBRACK() {
  return getToken(InQuIRParser::LBRACK, 0);
}

std::vector<InQuIRParser::ParticipantContext *> InQuIRParser::FunctionContext::participant() {
  return getRuleContexts<InQuIRParser::ParticipantContext>();
}

InQuIRParser::ParticipantContext* InQuIRParser::FunctionContext::participant(size_t i) {
  return getRuleContext<InQuIRParser::ParticipantContext>(i);
}

tree::TerminalNode* InQuIRParser::FunctionContext::RBRACK() {
  return getToken(InQuIRParser::RBRACK, 0);
}

std::vector<tree::TerminalNode *> InQuIRParser::FunctionContext::COMMA() {
  return getTokens(InQuIRParser::COMMA);
}

tree::TerminalNode* InQuIRParser::FunctionContext::COMMA(size_t i) {
  return getToken(InQuIRParser::COMMA, i);
}

tree::TerminalNode* InQuIRParser::FunctionContext::CLOSE() {
  return getToken(InQuIRParser::CLOSE, 0);
}

std::vector<InQuIRParser::ValueContext *> InQuIRParser::FunctionContext::value() {
  return getRuleContexts<InQuIRParser::ValueContext>();
}

InQuIRParser::ValueContext* InQuIRParser::FunctionContext::value(size_t i) {
  return getRuleContext<InQuIRParser::ValueContext>(i);
}

tree::TerminalNode* InQuIRParser::FunctionContext::INIT() {
  return getToken(InQuIRParser::INIT, 0);
}

std::vector<tree::TerminalNode *> InQuIRParser::FunctionContext::LPAREN() {
  return getTokens(InQuIRParser::LPAREN);
}

tree::TerminalNode* InQuIRParser::FunctionContext::LPAREN(size_t i) {
  return getToken(InQuIRParser::LPAREN, i);
}

std::vector<tree::TerminalNode *> InQuIRParser::FunctionContext::RPAREN() {
  return getTokens(InQuIRParser::RPAREN);
}

tree::TerminalNode* InQuIRParser::FunctionContext::RPAREN(size_t i) {
  return getToken(InQuIRParser::RPAREN, i);
}

tree::TerminalNode* InQuIRParser::FunctionContext::FREE() {
  return getToken(InQuIRParser::FREE, 0);
}

tree::TerminalNode* InQuIRParser::FunctionContext::MEASURE() {
  return getToken(InQuIRParser::MEASURE, 0);
}

InQuIRParser::QubitContext* InQuIRParser::FunctionContext::qubit() {
  return getRuleContext<InQuIRParser::QubitContext>(0);
}

tree::TerminalNode* InQuIRParser::FunctionContext::GENENT() {
  return getToken(InQuIRParser::GENENT, 0);
}

InQuIRParser::LabelContext* InQuIRParser::FunctionContext::label() {
  return getRuleContext<InQuIRParser::LabelContext>(0);
}

tree::TerminalNode* InQuIRParser::FunctionContext::ENTSWAP() {
  return getToken(InQuIRParser::ENTSWAP, 0);
}

std::vector<InQuIRParser::ExpressionContext *> InQuIRParser::FunctionContext::expression() {
  return getRuleContexts<InQuIRParser::ExpressionContext>();
}

InQuIRParser::ExpressionContext* InQuIRParser::FunctionContext::expression(size_t i) {
  return getRuleContext<InQuIRParser::ExpressionContext>(i);
}

tree::TerminalNode* InQuIRParser::FunctionContext::RECV() {
  return getToken(InQuIRParser::RECV, 0);
}

tree::TerminalNode* InQuIRParser::FunctionContext::COLON() {
  return getToken(InQuIRParser::COLON, 0);
}

tree::TerminalNode* InQuIRParser::FunctionContext::SEND() {
  return getToken(InQuIRParser::SEND, 0);
}

tree::TerminalNode* InQuIRParser::FunctionContext::RCXC() {
  return getToken(InQuIRParser::RCXC, 0);
}

tree::TerminalNode* InQuIRParser::FunctionContext::RCXT() {
  return getToken(InQuIRParser::RCXT, 0);
}


size_t InQuIRParser::FunctionContext::getRuleIndex() const {
  return InQuIRParser::RuleFunction;
}

void InQuIRParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void InQuIRParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}

InQuIRParser::FunctionContext* InQuIRParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 8, InQuIRParser::RuleFunction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(196);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(95);
      session();
      setState(96);
      match(InQuIRParser::EQUAL);
      setState(97);
      match(InQuIRParser::OPEN);
      setState(98);
      match(InQuIRParser::LBRACK);
      setState(99);
      participant();
      setState(104);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == InQuIRParser::COMMA) {
        setState(100);
        match(InQuIRParser::COMMA);
        setState(101);
        participant();
        setState(106);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(107);
      match(InQuIRParser::RBRACK);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(109);
      match(InQuIRParser::CLOSE);

      setState(110);
      session();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(111);
      value();
      setState(112);
      match(InQuIRParser::EQUAL);
      setState(113);
      match(InQuIRParser::INIT);
      setState(114);
      match(InQuIRParser::LPAREN);
      setState(115);
      match(InQuIRParser::RPAREN);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(117);
      match(InQuIRParser::FREE);
      setState(118);
      value();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(119);
      value();
      setState(120);
      match(InQuIRParser::EQUAL);
      setState(121);
      match(InQuIRParser::MEASURE);
      setState(122);
      qubit();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(124);
      value();
      setState(125);
      match(InQuIRParser::EQUAL);
      setState(126);
      match(InQuIRParser::GENENT);
      setState(127);
      match(InQuIRParser::LBRACK);
      setState(128);
      participant();
      setState(129);
      match(InQuIRParser::RBRACK);
      setState(130);
      match(InQuIRParser::LPAREN);
      setState(131);
      label();
      setState(132);
      match(InQuIRParser::RPAREN);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(134);
      match(InQuIRParser::LPAREN);
      setState(135);
      value();
      setState(136);
      match(InQuIRParser::COMMA);
      setState(137);
      value();
      setState(138);
      match(InQuIRParser::RPAREN);
      setState(139);
      match(InQuIRParser::EQUAL);
      setState(140);
      match(InQuIRParser::ENTSWAP);
      setState(141);
      match(InQuIRParser::LPAREN);
      setState(142);
      expression(0);
      setState(143);
      match(InQuIRParser::COMMA);
      setState(144);
      expression(0);
      setState(145);
      match(InQuIRParser::RPAREN);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(147);
      match(InQuIRParser::RECV);
      setState(148);
      match(InQuIRParser::LPAREN);
      setState(149);
      session();
      setState(150);
      match(InQuIRParser::COMMA);
      setState(151);
      label();
      setState(152);
      match(InQuIRParser::COLON);
      setState(153);
      value();
      setState(154);
      match(InQuIRParser::RPAREN);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(156);
      match(InQuIRParser::SEND);
      setState(157);
      match(InQuIRParser::LBRACK);
      setState(158);
      participant();
      setState(159);
      match(InQuIRParser::RBRACK);
      setState(160);
      match(InQuIRParser::LPAREN);
      setState(161);
      session();
      setState(162);
      match(InQuIRParser::COMMA);
      setState(163);
      label();
      setState(164);
      match(InQuIRParser::COLON);
      setState(165);
      value();
      setState(166);
      match(InQuIRParser::RPAREN);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(168);
      match(InQuIRParser::RCXC);
      setState(169);
      match(InQuIRParser::LBRACK);
      setState(170);
      participant();
      setState(171);
      match(InQuIRParser::RBRACK);
      setState(172);
      match(InQuIRParser::LPAREN);
      setState(173);
      session();
      setState(174);
      match(InQuIRParser::COMMA);
      setState(175);
      label();
      setState(176);
      match(InQuIRParser::COMMA);
      setState(177);
      expression(0);
      setState(178);
      match(InQuIRParser::COMMA);
      setState(179);
      expression(0);
      setState(180);
      match(InQuIRParser::RPAREN);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(182);
      match(InQuIRParser::RCXT);
      setState(183);
      match(InQuIRParser::LBRACK);
      setState(184);
      participant();
      setState(185);
      match(InQuIRParser::RBRACK);
      setState(186);
      match(InQuIRParser::LPAREN);
      setState(187);
      session();
      setState(188);
      match(InQuIRParser::COMMA);
      setState(189);
      label();
      setState(190);
      match(InQuIRParser::COMMA);
      setState(191);
      expression(0);
      setState(192);
      match(InQuIRParser::COMMA);
      setState(193);
      expression(0);
      setState(194);
      match(InQuIRParser::RPAREN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Quantum_instructionContext ------------------------------------------------------------------

InQuIRParser::Quantum_instructionContext::Quantum_instructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

InQuIRParser::GateContext* InQuIRParser::Quantum_instructionContext::gate() {
  return getRuleContext<InQuIRParser::GateContext>(0);
}

std::vector<InQuIRParser::QubitContext *> InQuIRParser::Quantum_instructionContext::qubit() {
  return getRuleContexts<InQuIRParser::QubitContext>();
}

InQuIRParser::QubitContext* InQuIRParser::Quantum_instructionContext::qubit(size_t i) {
  return getRuleContext<InQuIRParser::QubitContext>(i);
}

tree::TerminalNode* InQuIRParser::Quantum_instructionContext::LBRACK() {
  return getToken(InQuIRParser::LBRACK, 0);
}

InQuIRParser::ValueContext* InQuIRParser::Quantum_instructionContext::value() {
  return getRuleContext<InQuIRParser::ValueContext>(0);
}

tree::TerminalNode* InQuIRParser::Quantum_instructionContext::RBRACK() {
  return getToken(InQuIRParser::RBRACK, 0);
}


size_t InQuIRParser::Quantum_instructionContext::getRuleIndex() const {
  return InQuIRParser::RuleQuantum_instruction;
}

void InQuIRParser::Quantum_instructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantum_instruction(this);
}

void InQuIRParser::Quantum_instructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantum_instruction(this);
}

InQuIRParser::Quantum_instructionContext* InQuIRParser::quantum_instruction() {
  Quantum_instructionContext *_localctx = _tracker.createInstance<Quantum_instructionContext>(_ctx, getState());
  enterRule(_localctx, 10, InQuIRParser::RuleQuantum_instruction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(217);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(198);
      gate();
      setState(199);
      qubit();
      setState(203);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == InQuIRParser::ID) {
        setState(200);
        qubit();
        setState(205);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(206);
      gate();
      setState(207);
      match(InQuIRParser::LBRACK);
      setState(208);
      value();
      setState(209);
      match(InQuIRParser::RBRACK);
      setState(210);
      qubit();
      setState(214);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == InQuIRParser::ID) {
        setState(211);
        qubit();
        setState(216);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

InQuIRParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

InQuIRParser::ValueContext* InQuIRParser::ExpressionContext::value() {
  return getRuleContext<InQuIRParser::ValueContext>(0);
}

tree::TerminalNode* InQuIRParser::ExpressionContext::LPAREN() {
  return getToken(InQuIRParser::LPAREN, 0);
}

std::vector<InQuIRParser::ExpressionContext *> InQuIRParser::ExpressionContext::expression() {
  return getRuleContexts<InQuIRParser::ExpressionContext>();
}

InQuIRParser::ExpressionContext* InQuIRParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<InQuIRParser::ExpressionContext>(i);
}

tree::TerminalNode* InQuIRParser::ExpressionContext::RPAREN() {
  return getToken(InQuIRParser::RPAREN, 0);
}

tree::TerminalNode* InQuIRParser::ExpressionContext::AND() {
  return getToken(InQuIRParser::AND, 0);
}

tree::TerminalNode* InQuIRParser::ExpressionContext::OR() {
  return getToken(InQuIRParser::OR, 0);
}

tree::TerminalNode* InQuIRParser::ExpressionContext::XOR() {
  return getToken(InQuIRParser::XOR, 0);
}


size_t InQuIRParser::ExpressionContext::getRuleIndex() const {
  return InQuIRParser::RuleExpression;
}

void InQuIRParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void InQuIRParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


InQuIRParser::ExpressionContext* InQuIRParser::expression() {
   return expression(0);
}

InQuIRParser::ExpressionContext* InQuIRParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  InQuIRParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  InQuIRParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, InQuIRParser::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(225);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case InQuIRParser::ID:
      case InQuIRParser::INT: {
        setState(220);
        value();
        break;
      }

      case InQuIRParser::LPAREN: {
        setState(221);
        match(InQuIRParser::LPAREN);
        setState(222);
        expression(0);
        setState(223);
        match(InQuIRParser::RPAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(238);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(236);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(227);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(228);
          match(InQuIRParser::AND);
          setState(229);
          expression(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(230);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(231);
          match(InQuIRParser::OR);
          setState(232);
          expression(4);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(233);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(234);
          match(InQuIRParser::XOR);
          setState(235);
          expression(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(240);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

InQuIRParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

InQuIRParser::QubitContext* InQuIRParser::ValueContext::qubit() {
  return getRuleContext<InQuIRParser::QubitContext>(0);
}

tree::TerminalNode* InQuIRParser::ValueContext::INT() {
  return getToken(InQuIRParser::INT, 0);
}

tree::TerminalNode* InQuIRParser::ValueContext::ID() {
  return getToken(InQuIRParser::ID, 0);
}


size_t InQuIRParser::ValueContext::getRuleIndex() const {
  return InQuIRParser::RuleValue;
}

void InQuIRParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void InQuIRParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}

InQuIRParser::ValueContext* InQuIRParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 14, InQuIRParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(244);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(241);
      qubit();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(242);
      match(InQuIRParser::INT);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(243);
      match(InQuIRParser::ID);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GateContext ------------------------------------------------------------------

InQuIRParser::GateContext::GateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* InQuIRParser::GateContext::X() {
  return getToken(InQuIRParser::X, 0);
}

tree::TerminalNode* InQuIRParser::GateContext::Y() {
  return getToken(InQuIRParser::Y, 0);
}

tree::TerminalNode* InQuIRParser::GateContext::Z() {
  return getToken(InQuIRParser::Z, 0);
}

tree::TerminalNode* InQuIRParser::GateContext::H() {
  return getToken(InQuIRParser::H, 0);
}

tree::TerminalNode* InQuIRParser::GateContext::CX() {
  return getToken(InQuIRParser::CX, 0);
}

tree::TerminalNode* InQuIRParser::GateContext::CZ() {
  return getToken(InQuIRParser::CZ, 0);
}

tree::TerminalNode* InQuIRParser::GateContext::SWAP() {
  return getToken(InQuIRParser::SWAP, 0);
}


size_t InQuIRParser::GateContext::getRuleIndex() const {
  return InQuIRParser::RuleGate;
}

void InQuIRParser::GateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGate(this);
}

void InQuIRParser::GateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGate(this);
}

InQuIRParser::GateContext* InQuIRParser::gate() {
  GateContext *_localctx = _tracker.createInstance<GateContext>(_ctx, getState());
  enterRule(_localctx, 16, InQuIRParser::RuleGate);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(246);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 520192) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SessionContext ------------------------------------------------------------------

InQuIRParser::SessionContext::SessionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* InQuIRParser::SessionContext::ID() {
  return getToken(InQuIRParser::ID, 0);
}


size_t InQuIRParser::SessionContext::getRuleIndex() const {
  return InQuIRParser::RuleSession;
}

void InQuIRParser::SessionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSession(this);
}

void InQuIRParser::SessionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSession(this);
}

InQuIRParser::SessionContext* InQuIRParser::session() {
  SessionContext *_localctx = _tracker.createInstance<SessionContext>(_ctx, getState());
  enterRule(_localctx, 18, InQuIRParser::RuleSession);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(248);
    match(InQuIRParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParticipantContext ------------------------------------------------------------------

InQuIRParser::ParticipantContext::ParticipantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* InQuIRParser::ParticipantContext::INT() {
  return getToken(InQuIRParser::INT, 0);
}


size_t InQuIRParser::ParticipantContext::getRuleIndex() const {
  return InQuIRParser::RuleParticipant;
}

void InQuIRParser::ParticipantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParticipant(this);
}

void InQuIRParser::ParticipantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParticipant(this);
}

InQuIRParser::ParticipantContext* InQuIRParser::participant() {
  ParticipantContext *_localctx = _tracker.createInstance<ParticipantContext>(_ctx, getState());
  enterRule(_localctx, 20, InQuIRParser::RuleParticipant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(250);
    match(InQuIRParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelContext ------------------------------------------------------------------

InQuIRParser::LabelContext::LabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* InQuIRParser::LabelContext::ID() {
  return getToken(InQuIRParser::ID, 0);
}


size_t InQuIRParser::LabelContext::getRuleIndex() const {
  return InQuIRParser::RuleLabel;
}

void InQuIRParser::LabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabel(this);
}

void InQuIRParser::LabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabel(this);
}

InQuIRParser::LabelContext* InQuIRParser::label() {
  LabelContext *_localctx = _tracker.createInstance<LabelContext>(_ctx, getState());
  enterRule(_localctx, 22, InQuIRParser::RuleLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    match(InQuIRParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QubitContext ------------------------------------------------------------------

InQuIRParser::QubitContext::QubitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* InQuIRParser::QubitContext::ID() {
  return getToken(InQuIRParser::ID, 0);
}


size_t InQuIRParser::QubitContext::getRuleIndex() const {
  return InQuIRParser::RuleQubit;
}

void InQuIRParser::QubitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQubit(this);
}

void InQuIRParser::QubitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQubit(this);
}

InQuIRParser::QubitContext* InQuIRParser::qubit() {
  QubitContext *_localctx = _tracker.createInstance<QubitContext>(_ctx, getState());
  enterRule(_localctx, 24, InQuIRParser::RuleQubit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(254);
    match(InQuIRParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool InQuIRParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 6: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool InQuIRParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);
    case 2: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void InQuIRParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  inquirparserParserInitialize();
#else
  ::antlr4::internal::call_once(inquirparserParserOnceFlag, inquirparserParserInitialize);
#endif
}
