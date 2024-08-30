
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
      "mainprogram", "system", "process", "line", "function", "quantum_instruction", 
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
  	4,1,44,224,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,1,0,1,0,1,1,5,1,30,
  	8,1,10,1,12,1,33,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,43,8,1,1,2,1,
  	2,1,2,5,2,48,8,2,10,2,12,2,51,9,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,3,3,
  	61,8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,70,8,4,10,4,12,4,73,9,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	3,4,164,8,4,1,5,1,5,1,5,5,5,169,8,5,10,5,12,5,172,9,5,1,5,1,5,1,5,1,5,
  	1,5,1,5,5,5,180,8,5,10,5,12,5,183,9,5,3,5,185,8,5,1,6,1,6,1,6,1,6,1,6,
  	1,6,3,6,193,8,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,5,6,204,8,6,10,6,
  	12,6,207,9,6,1,7,1,7,1,7,3,7,212,8,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,
  	11,1,12,1,12,1,12,0,1,12,13,0,2,4,6,8,10,12,14,16,18,20,22,24,0,1,1,0,
  	12,18,234,0,26,1,0,0,0,2,42,1,0,0,0,4,44,1,0,0,0,6,60,1,0,0,0,8,163,1,
  	0,0,0,10,184,1,0,0,0,12,192,1,0,0,0,14,211,1,0,0,0,16,213,1,0,0,0,18,
  	215,1,0,0,0,20,217,1,0,0,0,22,219,1,0,0,0,24,221,1,0,0,0,26,27,3,2,1,
  	0,27,1,1,0,0,0,28,30,3,4,2,0,29,28,1,0,0,0,30,33,1,0,0,0,31,29,1,0,0,
  	0,31,32,1,0,0,0,32,34,1,0,0,0,33,31,1,0,0,0,34,43,5,0,0,1,35,36,5,31,
  	0,0,36,37,3,2,1,0,37,38,5,39,0,0,38,39,3,2,1,0,39,40,5,32,0,0,40,41,5,
  	0,0,1,41,43,1,0,0,0,42,31,1,0,0,0,42,35,1,0,0,0,43,3,1,0,0,0,44,45,3,
  	20,10,0,45,49,5,29,0,0,46,48,3,6,3,0,47,46,1,0,0,0,48,51,1,0,0,0,49,47,
  	1,0,0,0,49,50,1,0,0,0,50,52,1,0,0,0,51,49,1,0,0,0,52,53,5,30,0,0,53,5,
  	1,0,0,0,54,55,3,8,4,0,55,56,5,37,0,0,56,61,1,0,0,0,57,58,3,10,5,0,58,
  	59,5,37,0,0,59,61,1,0,0,0,60,54,1,0,0,0,60,57,1,0,0,0,61,7,1,0,0,0,62,
  	63,3,18,9,0,63,64,5,40,0,0,64,65,5,1,0,0,65,66,5,33,0,0,66,71,3,20,10,
  	0,67,68,5,35,0,0,68,70,3,20,10,0,69,67,1,0,0,0,70,73,1,0,0,0,71,69,1,
  	0,0,0,71,72,1,0,0,0,72,74,1,0,0,0,73,71,1,0,0,0,74,75,5,34,0,0,75,164,
  	1,0,0,0,76,77,5,2,0,0,77,164,3,18,9,0,78,79,3,14,7,0,79,80,5,40,0,0,80,
  	81,5,3,0,0,81,82,5,31,0,0,82,83,5,32,0,0,83,164,1,0,0,0,84,85,5,4,0,0,
  	85,164,3,14,7,0,86,87,3,14,7,0,87,88,5,40,0,0,88,89,5,5,0,0,89,90,3,24,
  	12,0,90,164,1,0,0,0,91,92,3,14,7,0,92,93,5,40,0,0,93,94,5,6,0,0,94,95,
  	5,33,0,0,95,96,3,20,10,0,96,97,5,34,0,0,97,98,5,31,0,0,98,99,3,22,11,
  	0,99,100,5,32,0,0,100,164,1,0,0,0,101,102,5,31,0,0,102,103,3,14,7,0,103,
  	104,5,35,0,0,104,105,3,14,7,0,105,106,5,32,0,0,106,107,5,40,0,0,107,108,
  	5,7,0,0,108,109,5,31,0,0,109,110,3,12,6,0,110,111,5,35,0,0,111,112,3,
  	12,6,0,112,113,5,32,0,0,113,164,1,0,0,0,114,115,5,8,0,0,115,116,5,31,
  	0,0,116,117,3,18,9,0,117,118,5,35,0,0,118,119,3,22,11,0,119,120,5,36,
  	0,0,120,121,3,14,7,0,121,122,5,32,0,0,122,164,1,0,0,0,123,124,5,9,0,0,
  	124,125,5,33,0,0,125,126,3,20,10,0,126,127,5,34,0,0,127,128,5,31,0,0,
  	128,129,3,18,9,0,129,130,5,35,0,0,130,131,3,22,11,0,131,132,5,36,0,0,
  	132,133,3,14,7,0,133,134,5,32,0,0,134,164,1,0,0,0,135,136,5,10,0,0,136,
  	137,5,33,0,0,137,138,3,20,10,0,138,139,5,34,0,0,139,140,5,31,0,0,140,
  	141,3,18,9,0,141,142,5,35,0,0,142,143,3,22,11,0,143,144,5,35,0,0,144,
  	145,3,12,6,0,145,146,5,35,0,0,146,147,3,12,6,0,147,148,5,32,0,0,148,164,
  	1,0,0,0,149,150,5,11,0,0,150,151,5,33,0,0,151,152,3,20,10,0,152,153,5,
  	34,0,0,153,154,5,31,0,0,154,155,3,18,9,0,155,156,5,35,0,0,156,157,3,22,
  	11,0,157,158,5,35,0,0,158,159,3,12,6,0,159,160,5,35,0,0,160,161,3,12,
  	6,0,161,162,5,32,0,0,162,164,1,0,0,0,163,62,1,0,0,0,163,76,1,0,0,0,163,
  	78,1,0,0,0,163,84,1,0,0,0,163,86,1,0,0,0,163,91,1,0,0,0,163,101,1,0,0,
  	0,163,114,1,0,0,0,163,123,1,0,0,0,163,135,1,0,0,0,163,149,1,0,0,0,164,
  	9,1,0,0,0,165,166,3,16,8,0,166,170,3,24,12,0,167,169,3,24,12,0,168,167,
  	1,0,0,0,169,172,1,0,0,0,170,168,1,0,0,0,170,171,1,0,0,0,171,185,1,0,0,
  	0,172,170,1,0,0,0,173,174,3,16,8,0,174,175,5,33,0,0,175,176,3,14,7,0,
  	176,177,5,34,0,0,177,181,3,24,12,0,178,180,3,24,12,0,179,178,1,0,0,0,
  	180,183,1,0,0,0,181,179,1,0,0,0,181,182,1,0,0,0,182,185,1,0,0,0,183,181,
  	1,0,0,0,184,165,1,0,0,0,184,173,1,0,0,0,185,11,1,0,0,0,186,187,6,6,-1,
  	0,187,193,3,14,7,0,188,189,5,31,0,0,189,190,3,12,6,0,190,191,5,32,0,0,
  	191,193,1,0,0,0,192,186,1,0,0,0,192,188,1,0,0,0,193,205,1,0,0,0,194,195,
  	10,4,0,0,195,196,5,23,0,0,196,204,3,12,6,5,197,198,10,3,0,0,198,199,5,
  	24,0,0,199,204,3,12,6,4,200,201,10,2,0,0,201,202,5,25,0,0,202,204,3,12,
  	6,3,203,194,1,0,0,0,203,197,1,0,0,0,203,200,1,0,0,0,204,207,1,0,0,0,205,
  	203,1,0,0,0,205,206,1,0,0,0,206,13,1,0,0,0,207,205,1,0,0,0,208,212,3,
  	24,12,0,209,212,5,21,0,0,210,212,5,19,0,0,211,208,1,0,0,0,211,209,1,0,
  	0,0,211,210,1,0,0,0,212,15,1,0,0,0,213,214,7,0,0,0,214,17,1,0,0,0,215,
  	216,5,19,0,0,216,19,1,0,0,0,217,218,5,21,0,0,218,21,1,0,0,0,219,220,5,
  	19,0,0,220,23,1,0,0,0,221,222,5,19,0,0,222,25,1,0,0,0,13,31,42,49,60,
  	71,163,170,181,184,192,203,205,211
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

std::vector<InQuIRParser::LineContext *> InQuIRParser::ProcessContext::line() {
  return getRuleContexts<InQuIRParser::LineContext>();
}

InQuIRParser::LineContext* InQuIRParser::ProcessContext::line(size_t i) {
  return getRuleContext<InQuIRParser::LineContext>(i);
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
      ((1ULL << _la) & 2150629140) != 0)) {
      setState(46);
      line();
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

//----------------- LineContext ------------------------------------------------------------------

InQuIRParser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t InQuIRParser::LineContext::getRuleIndex() const {
  return InQuIRParser::RuleLine;
}

void InQuIRParser::LineContext::copyFrom(LineContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- QuantumInstructionLineContext ------------------------------------------------------------------

InQuIRParser::Quantum_instructionContext* InQuIRParser::QuantumInstructionLineContext::quantum_instruction() {
  return getRuleContext<InQuIRParser::Quantum_instructionContext>(0);
}

tree::TerminalNode* InQuIRParser::QuantumInstructionLineContext::SEMICOLON() {
  return getToken(InQuIRParser::SEMICOLON, 0);
}

InQuIRParser::QuantumInstructionLineContext::QuantumInstructionLineContext(LineContext *ctx) { copyFrom(ctx); }

void InQuIRParser::QuantumInstructionLineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantumInstructionLine(this);
}
void InQuIRParser::QuantumInstructionLineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantumInstructionLine(this);
}
//----------------- FunctionLineContext ------------------------------------------------------------------

InQuIRParser::FunctionContext* InQuIRParser::FunctionLineContext::function() {
  return getRuleContext<InQuIRParser::FunctionContext>(0);
}

tree::TerminalNode* InQuIRParser::FunctionLineContext::SEMICOLON() {
  return getToken(InQuIRParser::SEMICOLON, 0);
}

InQuIRParser::FunctionLineContext::FunctionLineContext(LineContext *ctx) { copyFrom(ctx); }

void InQuIRParser::FunctionLineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionLine(this);
}
void InQuIRParser::FunctionLineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionLine(this);
}
InQuIRParser::LineContext* InQuIRParser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 6, InQuIRParser::RuleLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(60);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case InQuIRParser::CLOSE:
      case InQuIRParser::FREE:
      case InQuIRParser::RECV:
      case InQuIRParser::SEND:
      case InQuIRParser::RCXC:
      case InQuIRParser::RCXT:
      case InQuIRParser::ID:
      case InQuIRParser::INT:
      case InQuIRParser::LPAREN: {
        _localctx = _tracker.createInstance<InQuIRParser::FunctionLineContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(54);
        function();
        setState(55);
        match(InQuIRParser::SEMICOLON);
        break;
      }

      case InQuIRParser::H:
      case InQuIRParser::X:
      case InQuIRParser::Y:
      case InQuIRParser::Z:
      case InQuIRParser::CX:
      case InQuIRParser::CZ:
      case InQuIRParser::SWAP: {
        _localctx = _tracker.createInstance<InQuIRParser::QuantumInstructionLineContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(57);
        quantum_instruction();
        setState(58);
        match(InQuIRParser::SEMICOLON);
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

//----------------- FunctionContext ------------------------------------------------------------------

InQuIRParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t InQuIRParser::FunctionContext::getRuleIndex() const {
  return InQuIRParser::RuleFunction;
}

void InQuIRParser::FunctionContext::copyFrom(FunctionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- RecvContext ------------------------------------------------------------------

tree::TerminalNode* InQuIRParser::RecvContext::RECV() {
  return getToken(InQuIRParser::RECV, 0);
}

tree::TerminalNode* InQuIRParser::RecvContext::LPAREN() {
  return getToken(InQuIRParser::LPAREN, 0);
}

InQuIRParser::SessionContext* InQuIRParser::RecvContext::session() {
  return getRuleContext<InQuIRParser::SessionContext>(0);
}

tree::TerminalNode* InQuIRParser::RecvContext::COMMA() {
  return getToken(InQuIRParser::COMMA, 0);
}

InQuIRParser::LabelContext* InQuIRParser::RecvContext::label() {
  return getRuleContext<InQuIRParser::LabelContext>(0);
}

tree::TerminalNode* InQuIRParser::RecvContext::COLON() {
  return getToken(InQuIRParser::COLON, 0);
}

InQuIRParser::ValueContext* InQuIRParser::RecvContext::value() {
  return getRuleContext<InQuIRParser::ValueContext>(0);
}

tree::TerminalNode* InQuIRParser::RecvContext::RPAREN() {
  return getToken(InQuIRParser::RPAREN, 0);
}

InQuIRParser::RecvContext::RecvContext(FunctionContext *ctx) { copyFrom(ctx); }

void InQuIRParser::RecvContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRecv(this);
}
void InQuIRParser::RecvContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRecv(this);
}
//----------------- GenEntContext ------------------------------------------------------------------

InQuIRParser::ValueContext* InQuIRParser::GenEntContext::value() {
  return getRuleContext<InQuIRParser::ValueContext>(0);
}

tree::TerminalNode* InQuIRParser::GenEntContext::EQUAL() {
  return getToken(InQuIRParser::EQUAL, 0);
}

tree::TerminalNode* InQuIRParser::GenEntContext::GENENT() {
  return getToken(InQuIRParser::GENENT, 0);
}

tree::TerminalNode* InQuIRParser::GenEntContext::LBRACK() {
  return getToken(InQuIRParser::LBRACK, 0);
}

InQuIRParser::ParticipantContext* InQuIRParser::GenEntContext::participant() {
  return getRuleContext<InQuIRParser::ParticipantContext>(0);
}

tree::TerminalNode* InQuIRParser::GenEntContext::RBRACK() {
  return getToken(InQuIRParser::RBRACK, 0);
}

tree::TerminalNode* InQuIRParser::GenEntContext::LPAREN() {
  return getToken(InQuIRParser::LPAREN, 0);
}

InQuIRParser::LabelContext* InQuIRParser::GenEntContext::label() {
  return getRuleContext<InQuIRParser::LabelContext>(0);
}

tree::TerminalNode* InQuIRParser::GenEntContext::RPAREN() {
  return getToken(InQuIRParser::RPAREN, 0);
}

InQuIRParser::GenEntContext::GenEntContext(FunctionContext *ctx) { copyFrom(ctx); }

void InQuIRParser::GenEntContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenEnt(this);
}
void InQuIRParser::GenEntContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenEnt(this);
}
//----------------- InitContext ------------------------------------------------------------------

InQuIRParser::ValueContext* InQuIRParser::InitContext::value() {
  return getRuleContext<InQuIRParser::ValueContext>(0);
}

tree::TerminalNode* InQuIRParser::InitContext::EQUAL() {
  return getToken(InQuIRParser::EQUAL, 0);
}

tree::TerminalNode* InQuIRParser::InitContext::INIT() {
  return getToken(InQuIRParser::INIT, 0);
}

tree::TerminalNode* InQuIRParser::InitContext::LPAREN() {
  return getToken(InQuIRParser::LPAREN, 0);
}

tree::TerminalNode* InQuIRParser::InitContext::RPAREN() {
  return getToken(InQuIRParser::RPAREN, 0);
}

InQuIRParser::InitContext::InitContext(FunctionContext *ctx) { copyFrom(ctx); }

void InQuIRParser::InitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInit(this);
}
void InQuIRParser::InitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInit(this);
}
//----------------- EntSwapContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> InQuIRParser::EntSwapContext::LPAREN() {
  return getTokens(InQuIRParser::LPAREN);
}

tree::TerminalNode* InQuIRParser::EntSwapContext::LPAREN(size_t i) {
  return getToken(InQuIRParser::LPAREN, i);
}

std::vector<InQuIRParser::ValueContext *> InQuIRParser::EntSwapContext::value() {
  return getRuleContexts<InQuIRParser::ValueContext>();
}

InQuIRParser::ValueContext* InQuIRParser::EntSwapContext::value(size_t i) {
  return getRuleContext<InQuIRParser::ValueContext>(i);
}

std::vector<tree::TerminalNode *> InQuIRParser::EntSwapContext::COMMA() {
  return getTokens(InQuIRParser::COMMA);
}

tree::TerminalNode* InQuIRParser::EntSwapContext::COMMA(size_t i) {
  return getToken(InQuIRParser::COMMA, i);
}

std::vector<tree::TerminalNode *> InQuIRParser::EntSwapContext::RPAREN() {
  return getTokens(InQuIRParser::RPAREN);
}

tree::TerminalNode* InQuIRParser::EntSwapContext::RPAREN(size_t i) {
  return getToken(InQuIRParser::RPAREN, i);
}

tree::TerminalNode* InQuIRParser::EntSwapContext::EQUAL() {
  return getToken(InQuIRParser::EQUAL, 0);
}

tree::TerminalNode* InQuIRParser::EntSwapContext::ENTSWAP() {
  return getToken(InQuIRParser::ENTSWAP, 0);
}

std::vector<InQuIRParser::ExpressionContext *> InQuIRParser::EntSwapContext::expression() {
  return getRuleContexts<InQuIRParser::ExpressionContext>();
}

InQuIRParser::ExpressionContext* InQuIRParser::EntSwapContext::expression(size_t i) {
  return getRuleContext<InQuIRParser::ExpressionContext>(i);
}

InQuIRParser::EntSwapContext::EntSwapContext(FunctionContext *ctx) { copyFrom(ctx); }

void InQuIRParser::EntSwapContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEntSwap(this);
}
void InQuIRParser::EntSwapContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEntSwap(this);
}
//----------------- MeasureContext ------------------------------------------------------------------

InQuIRParser::ValueContext* InQuIRParser::MeasureContext::value() {
  return getRuleContext<InQuIRParser::ValueContext>(0);
}

tree::TerminalNode* InQuIRParser::MeasureContext::EQUAL() {
  return getToken(InQuIRParser::EQUAL, 0);
}

tree::TerminalNode* InQuIRParser::MeasureContext::MEASURE() {
  return getToken(InQuIRParser::MEASURE, 0);
}

InQuIRParser::QubitContext* InQuIRParser::MeasureContext::qubit() {
  return getRuleContext<InQuIRParser::QubitContext>(0);
}

InQuIRParser::MeasureContext::MeasureContext(FunctionContext *ctx) { copyFrom(ctx); }

void InQuIRParser::MeasureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeasure(this);
}
void InQuIRParser::MeasureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeasure(this);
}
//----------------- CloseContext ------------------------------------------------------------------

tree::TerminalNode* InQuIRParser::CloseContext::CLOSE() {
  return getToken(InQuIRParser::CLOSE, 0);
}

InQuIRParser::SessionContext* InQuIRParser::CloseContext::session() {
  return getRuleContext<InQuIRParser::SessionContext>(0);
}

InQuIRParser::CloseContext::CloseContext(FunctionContext *ctx) { copyFrom(ctx); }

void InQuIRParser::CloseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClose(this);
}
void InQuIRParser::CloseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClose(this);
}
//----------------- RCXCContext ------------------------------------------------------------------

tree::TerminalNode* InQuIRParser::RCXCContext::RCXC() {
  return getToken(InQuIRParser::RCXC, 0);
}

tree::TerminalNode* InQuIRParser::RCXCContext::LBRACK() {
  return getToken(InQuIRParser::LBRACK, 0);
}

InQuIRParser::ParticipantContext* InQuIRParser::RCXCContext::participant() {
  return getRuleContext<InQuIRParser::ParticipantContext>(0);
}

tree::TerminalNode* InQuIRParser::RCXCContext::RBRACK() {
  return getToken(InQuIRParser::RBRACK, 0);
}

tree::TerminalNode* InQuIRParser::RCXCContext::LPAREN() {
  return getToken(InQuIRParser::LPAREN, 0);
}

InQuIRParser::SessionContext* InQuIRParser::RCXCContext::session() {
  return getRuleContext<InQuIRParser::SessionContext>(0);
}

std::vector<tree::TerminalNode *> InQuIRParser::RCXCContext::COMMA() {
  return getTokens(InQuIRParser::COMMA);
}

tree::TerminalNode* InQuIRParser::RCXCContext::COMMA(size_t i) {
  return getToken(InQuIRParser::COMMA, i);
}

InQuIRParser::LabelContext* InQuIRParser::RCXCContext::label() {
  return getRuleContext<InQuIRParser::LabelContext>(0);
}

std::vector<InQuIRParser::ExpressionContext *> InQuIRParser::RCXCContext::expression() {
  return getRuleContexts<InQuIRParser::ExpressionContext>();
}

InQuIRParser::ExpressionContext* InQuIRParser::RCXCContext::expression(size_t i) {
  return getRuleContext<InQuIRParser::ExpressionContext>(i);
}

tree::TerminalNode* InQuIRParser::RCXCContext::RPAREN() {
  return getToken(InQuIRParser::RPAREN, 0);
}

InQuIRParser::RCXCContext::RCXCContext(FunctionContext *ctx) { copyFrom(ctx); }

void InQuIRParser::RCXCContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRCXC(this);
}
void InQuIRParser::RCXCContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRCXC(this);
}
//----------------- RCXTContext ------------------------------------------------------------------

tree::TerminalNode* InQuIRParser::RCXTContext::RCXT() {
  return getToken(InQuIRParser::RCXT, 0);
}

tree::TerminalNode* InQuIRParser::RCXTContext::LBRACK() {
  return getToken(InQuIRParser::LBRACK, 0);
}

InQuIRParser::ParticipantContext* InQuIRParser::RCXTContext::participant() {
  return getRuleContext<InQuIRParser::ParticipantContext>(0);
}

tree::TerminalNode* InQuIRParser::RCXTContext::RBRACK() {
  return getToken(InQuIRParser::RBRACK, 0);
}

tree::TerminalNode* InQuIRParser::RCXTContext::LPAREN() {
  return getToken(InQuIRParser::LPAREN, 0);
}

InQuIRParser::SessionContext* InQuIRParser::RCXTContext::session() {
  return getRuleContext<InQuIRParser::SessionContext>(0);
}

std::vector<tree::TerminalNode *> InQuIRParser::RCXTContext::COMMA() {
  return getTokens(InQuIRParser::COMMA);
}

tree::TerminalNode* InQuIRParser::RCXTContext::COMMA(size_t i) {
  return getToken(InQuIRParser::COMMA, i);
}

InQuIRParser::LabelContext* InQuIRParser::RCXTContext::label() {
  return getRuleContext<InQuIRParser::LabelContext>(0);
}

std::vector<InQuIRParser::ExpressionContext *> InQuIRParser::RCXTContext::expression() {
  return getRuleContexts<InQuIRParser::ExpressionContext>();
}

InQuIRParser::ExpressionContext* InQuIRParser::RCXTContext::expression(size_t i) {
  return getRuleContext<InQuIRParser::ExpressionContext>(i);
}

tree::TerminalNode* InQuIRParser::RCXTContext::RPAREN() {
  return getToken(InQuIRParser::RPAREN, 0);
}

InQuIRParser::RCXTContext::RCXTContext(FunctionContext *ctx) { copyFrom(ctx); }

void InQuIRParser::RCXTContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRCXT(this);
}
void InQuIRParser::RCXTContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRCXT(this);
}
//----------------- FreeContext ------------------------------------------------------------------

tree::TerminalNode* InQuIRParser::FreeContext::FREE() {
  return getToken(InQuIRParser::FREE, 0);
}

InQuIRParser::ValueContext* InQuIRParser::FreeContext::value() {
  return getRuleContext<InQuIRParser::ValueContext>(0);
}

InQuIRParser::FreeContext::FreeContext(FunctionContext *ctx) { copyFrom(ctx); }

void InQuIRParser::FreeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFree(this);
}
void InQuIRParser::FreeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFree(this);
}
//----------------- OpenContext ------------------------------------------------------------------

InQuIRParser::SessionContext* InQuIRParser::OpenContext::session() {
  return getRuleContext<InQuIRParser::SessionContext>(0);
}

tree::TerminalNode* InQuIRParser::OpenContext::EQUAL() {
  return getToken(InQuIRParser::EQUAL, 0);
}

tree::TerminalNode* InQuIRParser::OpenContext::OPEN() {
  return getToken(InQuIRParser::OPEN, 0);
}

tree::TerminalNode* InQuIRParser::OpenContext::LBRACK() {
  return getToken(InQuIRParser::LBRACK, 0);
}

std::vector<InQuIRParser::ParticipantContext *> InQuIRParser::OpenContext::participant() {
  return getRuleContexts<InQuIRParser::ParticipantContext>();
}

InQuIRParser::ParticipantContext* InQuIRParser::OpenContext::participant(size_t i) {
  return getRuleContext<InQuIRParser::ParticipantContext>(i);
}

tree::TerminalNode* InQuIRParser::OpenContext::RBRACK() {
  return getToken(InQuIRParser::RBRACK, 0);
}

std::vector<tree::TerminalNode *> InQuIRParser::OpenContext::COMMA() {
  return getTokens(InQuIRParser::COMMA);
}

tree::TerminalNode* InQuIRParser::OpenContext::COMMA(size_t i) {
  return getToken(InQuIRParser::COMMA, i);
}

InQuIRParser::OpenContext::OpenContext(FunctionContext *ctx) { copyFrom(ctx); }

void InQuIRParser::OpenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpen(this);
}
void InQuIRParser::OpenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpen(this);
}
//----------------- SendContext ------------------------------------------------------------------

tree::TerminalNode* InQuIRParser::SendContext::SEND() {
  return getToken(InQuIRParser::SEND, 0);
}

tree::TerminalNode* InQuIRParser::SendContext::LBRACK() {
  return getToken(InQuIRParser::LBRACK, 0);
}

InQuIRParser::ParticipantContext* InQuIRParser::SendContext::participant() {
  return getRuleContext<InQuIRParser::ParticipantContext>(0);
}

tree::TerminalNode* InQuIRParser::SendContext::RBRACK() {
  return getToken(InQuIRParser::RBRACK, 0);
}

tree::TerminalNode* InQuIRParser::SendContext::LPAREN() {
  return getToken(InQuIRParser::LPAREN, 0);
}

InQuIRParser::SessionContext* InQuIRParser::SendContext::session() {
  return getRuleContext<InQuIRParser::SessionContext>(0);
}

tree::TerminalNode* InQuIRParser::SendContext::COMMA() {
  return getToken(InQuIRParser::COMMA, 0);
}

InQuIRParser::LabelContext* InQuIRParser::SendContext::label() {
  return getRuleContext<InQuIRParser::LabelContext>(0);
}

tree::TerminalNode* InQuIRParser::SendContext::COLON() {
  return getToken(InQuIRParser::COLON, 0);
}

InQuIRParser::ValueContext* InQuIRParser::SendContext::value() {
  return getRuleContext<InQuIRParser::ValueContext>(0);
}

tree::TerminalNode* InQuIRParser::SendContext::RPAREN() {
  return getToken(InQuIRParser::RPAREN, 0);
}

InQuIRParser::SendContext::SendContext(FunctionContext *ctx) { copyFrom(ctx); }

void InQuIRParser::SendContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSend(this);
}
void InQuIRParser::SendContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSend(this);
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
    setState(163);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<InQuIRParser::OpenContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(62);
      session();
      setState(63);
      match(InQuIRParser::EQUAL);
      setState(64);
      match(InQuIRParser::OPEN);
      setState(65);
      match(InQuIRParser::LBRACK);
      setState(66);
      participant();
      setState(71);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == InQuIRParser::COMMA) {
        setState(67);
        match(InQuIRParser::COMMA);
        setState(68);
        participant();
        setState(73);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(74);
      match(InQuIRParser::RBRACK);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<InQuIRParser::CloseContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(76);
      match(InQuIRParser::CLOSE);

      setState(77);
      session();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<InQuIRParser::InitContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(78);
      value();
      setState(79);
      match(InQuIRParser::EQUAL);
      setState(80);
      match(InQuIRParser::INIT);
      setState(81);
      match(InQuIRParser::LPAREN);
      setState(82);
      match(InQuIRParser::RPAREN);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<InQuIRParser::FreeContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(84);
      match(InQuIRParser::FREE);
      setState(85);
      value();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<InQuIRParser::MeasureContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(86);
      value();
      setState(87);
      match(InQuIRParser::EQUAL);
      setState(88);
      match(InQuIRParser::MEASURE);
      setState(89);
      qubit();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<InQuIRParser::GenEntContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(91);
      value();
      setState(92);
      match(InQuIRParser::EQUAL);
      setState(93);
      match(InQuIRParser::GENENT);
      setState(94);
      match(InQuIRParser::LBRACK);
      setState(95);
      participant();
      setState(96);
      match(InQuIRParser::RBRACK);
      setState(97);
      match(InQuIRParser::LPAREN);
      setState(98);
      label();
      setState(99);
      match(InQuIRParser::RPAREN);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<InQuIRParser::EntSwapContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(101);
      match(InQuIRParser::LPAREN);
      setState(102);
      value();
      setState(103);
      match(InQuIRParser::COMMA);
      setState(104);
      value();
      setState(105);
      match(InQuIRParser::RPAREN);
      setState(106);
      match(InQuIRParser::EQUAL);
      setState(107);
      match(InQuIRParser::ENTSWAP);
      setState(108);
      match(InQuIRParser::LPAREN);
      setState(109);
      expression(0);
      setState(110);
      match(InQuIRParser::COMMA);
      setState(111);
      expression(0);
      setState(112);
      match(InQuIRParser::RPAREN);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<InQuIRParser::RecvContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(114);
      match(InQuIRParser::RECV);
      setState(115);
      match(InQuIRParser::LPAREN);
      setState(116);
      session();
      setState(117);
      match(InQuIRParser::COMMA);
      setState(118);
      label();
      setState(119);
      match(InQuIRParser::COLON);
      setState(120);
      value();
      setState(121);
      match(InQuIRParser::RPAREN);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<InQuIRParser::SendContext>(_localctx);
      enterOuterAlt(_localctx, 9);
      setState(123);
      match(InQuIRParser::SEND);
      setState(124);
      match(InQuIRParser::LBRACK);
      setState(125);
      participant();
      setState(126);
      match(InQuIRParser::RBRACK);
      setState(127);
      match(InQuIRParser::LPAREN);
      setState(128);
      session();
      setState(129);
      match(InQuIRParser::COMMA);
      setState(130);
      label();
      setState(131);
      match(InQuIRParser::COLON);
      setState(132);
      value();
      setState(133);
      match(InQuIRParser::RPAREN);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<InQuIRParser::RCXCContext>(_localctx);
      enterOuterAlt(_localctx, 10);
      setState(135);
      match(InQuIRParser::RCXC);
      setState(136);
      match(InQuIRParser::LBRACK);
      setState(137);
      participant();
      setState(138);
      match(InQuIRParser::RBRACK);
      setState(139);
      match(InQuIRParser::LPAREN);
      setState(140);
      session();
      setState(141);
      match(InQuIRParser::COMMA);
      setState(142);
      label();
      setState(143);
      match(InQuIRParser::COMMA);
      setState(144);
      expression(0);
      setState(145);
      match(InQuIRParser::COMMA);
      setState(146);
      expression(0);
      setState(147);
      match(InQuIRParser::RPAREN);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<InQuIRParser::RCXTContext>(_localctx);
      enterOuterAlt(_localctx, 11);
      setState(149);
      match(InQuIRParser::RCXT);
      setState(150);
      match(InQuIRParser::LBRACK);
      setState(151);
      participant();
      setState(152);
      match(InQuIRParser::RBRACK);
      setState(153);
      match(InQuIRParser::LPAREN);
      setState(154);
      session();
      setState(155);
      match(InQuIRParser::COMMA);
      setState(156);
      label();
      setState(157);
      match(InQuIRParser::COMMA);
      setState(158);
      expression(0);
      setState(159);
      match(InQuIRParser::COMMA);
      setState(160);
      expression(0);
      setState(161);
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


size_t InQuIRParser::Quantum_instructionContext::getRuleIndex() const {
  return InQuIRParser::RuleQuantum_instruction;
}

void InQuIRParser::Quantum_instructionContext::copyFrom(Quantum_instructionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ConditionalGateContext ------------------------------------------------------------------

InQuIRParser::GateContext* InQuIRParser::ConditionalGateContext::gate() {
  return getRuleContext<InQuIRParser::GateContext>(0);
}

tree::TerminalNode* InQuIRParser::ConditionalGateContext::LBRACK() {
  return getToken(InQuIRParser::LBRACK, 0);
}

InQuIRParser::ValueContext* InQuIRParser::ConditionalGateContext::value() {
  return getRuleContext<InQuIRParser::ValueContext>(0);
}

tree::TerminalNode* InQuIRParser::ConditionalGateContext::RBRACK() {
  return getToken(InQuIRParser::RBRACK, 0);
}

std::vector<InQuIRParser::QubitContext *> InQuIRParser::ConditionalGateContext::qubit() {
  return getRuleContexts<InQuIRParser::QubitContext>();
}

InQuIRParser::QubitContext* InQuIRParser::ConditionalGateContext::qubit(size_t i) {
  return getRuleContext<InQuIRParser::QubitContext>(i);
}

InQuIRParser::ConditionalGateContext::ConditionalGateContext(Quantum_instructionContext *ctx) { copyFrom(ctx); }

void InQuIRParser::ConditionalGateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalGate(this);
}
void InQuIRParser::ConditionalGateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalGate(this);
}
//----------------- UsualGateContext ------------------------------------------------------------------

InQuIRParser::GateContext* InQuIRParser::UsualGateContext::gate() {
  return getRuleContext<InQuIRParser::GateContext>(0);
}

std::vector<InQuIRParser::QubitContext *> InQuIRParser::UsualGateContext::qubit() {
  return getRuleContexts<InQuIRParser::QubitContext>();
}

InQuIRParser::QubitContext* InQuIRParser::UsualGateContext::qubit(size_t i) {
  return getRuleContext<InQuIRParser::QubitContext>(i);
}

InQuIRParser::UsualGateContext::UsualGateContext(Quantum_instructionContext *ctx) { copyFrom(ctx); }

void InQuIRParser::UsualGateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsualGate(this);
}
void InQuIRParser::UsualGateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InQuIRParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsualGate(this);
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
    setState(184);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<InQuIRParser::UsualGateContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(165);
      gate();
      setState(166);
      qubit();
      setState(170);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == InQuIRParser::ID) {
        setState(167);
        qubit();
        setState(172);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<InQuIRParser::ConditionalGateContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(173);
      gate();
      setState(174);
      match(InQuIRParser::LBRACK);
      setState(175);
      value();
      setState(176);
      match(InQuIRParser::RBRACK);
      setState(177);
      qubit();
      setState(181);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == InQuIRParser::ID) {
        setState(178);
        qubit();
        setState(183);
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
    setState(192);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case InQuIRParser::ID:
      case InQuIRParser::INT: {
        setState(187);
        value();
        break;
      }

      case InQuIRParser::LPAREN: {
        setState(188);
        match(InQuIRParser::LPAREN);
        setState(189);
        expression(0);
        setState(190);
        match(InQuIRParser::RPAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(205);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(203);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(194);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(195);
          match(InQuIRParser::AND);
          setState(196);
          expression(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(197);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(198);
          match(InQuIRParser::OR);
          setState(199);
          expression(4);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(200);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(201);
          match(InQuIRParser::XOR);
          setState(202);
          expression(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(207);
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
    setState(211);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(208);
      qubit();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(209);
      match(InQuIRParser::INT);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(210);
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
    setState(213);
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
    setState(215);
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
    setState(217);
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
    setState(219);
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
    setState(221);
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
