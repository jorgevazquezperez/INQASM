
// Generated from InQuIRLexer.g4 by ANTLR 4.13.1


#include "InQuIRLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct InQuIRLexerStaticData final {
  InQuIRLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  InQuIRLexerStaticData(const InQuIRLexerStaticData&) = delete;
  InQuIRLexerStaticData(InQuIRLexerStaticData&&) = delete;
  InQuIRLexerStaticData& operator=(const InQuIRLexerStaticData&) = delete;
  InQuIRLexerStaticData& operator=(InQuIRLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag inquirlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
InQuIRLexerStaticData *inquirlexerLexerStaticData = nullptr;

void inquirlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (inquirlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(inquirlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<InQuIRLexerStaticData>(
    std::vector<std::string>{
      "OPEN", "CLOSE", "INIT", "FREE", "MEASURE", "GENENT", "ENTSWAP", "RECV", 
      "SEND", "RCXC", "RCXT", "H", "X", "Y", "Z", "CX", "CZ", "SWAP", "ID", 
      "REAL", "INT", "STRING", "AND", "OR", "XOR", "IF", "ELSE", "THEN", 
      "LCURLY", "RCURLY", "LPAREN", "RPAREN", "LBRACK", "RBRACK", "COMMA", 
      "COLON", "SEMICOLON", "DOT", "VERT", "EQUAL", "EXCLAM", "QUESTION", 
      "WS", "EOL"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,44,274,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,
  	2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,119,
  	8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,
  	7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,
  	1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,15,1,16,
  	1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,18,1,18,5,18,177,8,18,10,18,12,18,
  	180,9,18,1,18,1,18,5,18,184,8,18,10,18,12,18,187,9,18,1,18,1,18,5,18,
  	191,8,18,10,18,12,18,194,9,18,3,18,196,8,18,1,19,1,19,1,19,3,19,201,8,
  	19,1,20,4,20,204,8,20,11,20,12,20,205,1,21,1,21,5,21,210,8,21,10,21,12,
  	21,213,9,21,1,21,1,21,1,22,1,22,1,22,1,23,1,23,1,23,1,24,1,24,1,25,1,
  	25,1,25,1,26,1,26,1,26,1,26,1,26,1,27,1,27,1,27,1,27,1,27,1,28,1,28,1,
  	29,1,29,1,30,1,30,1,31,1,31,1,32,1,32,1,33,1,33,1,34,1,34,1,35,1,35,1,
  	36,1,36,1,37,1,37,1,38,1,38,1,39,1,39,1,40,1,40,1,41,1,41,1,42,1,42,1,
  	42,1,42,1,43,3,43,271,8,43,1,43,1,43,0,0,44,1,1,3,2,5,3,7,4,9,5,11,6,
  	13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,
  	37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,
  	30,61,31,63,32,65,33,67,34,69,35,71,36,73,37,75,38,77,39,79,40,81,41,
  	83,42,85,43,87,44,1,0,6,2,0,95,95,97,122,4,0,48,57,65,90,95,95,97,122,
  	2,0,65,90,95,95,2,0,65,90,97,122,1,0,34,34,3,0,9,10,13,13,32,32,283,0,
  	1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,
  	0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,
  	23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,
  	0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,
  	0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,
  	55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,
  	0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,
  	0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,0,
  	87,1,0,0,0,1,89,1,0,0,0,3,94,1,0,0,0,5,100,1,0,0,0,7,105,1,0,0,0,9,118,
  	1,0,0,0,11,120,1,0,0,0,13,127,1,0,0,0,15,135,1,0,0,0,17,140,1,0,0,0,19,
  	145,1,0,0,0,21,150,1,0,0,0,23,155,1,0,0,0,25,157,1,0,0,0,27,159,1,0,0,
  	0,29,161,1,0,0,0,31,163,1,0,0,0,33,166,1,0,0,0,35,169,1,0,0,0,37,195,
  	1,0,0,0,39,197,1,0,0,0,41,203,1,0,0,0,43,207,1,0,0,0,45,216,1,0,0,0,47,
  	219,1,0,0,0,49,222,1,0,0,0,51,224,1,0,0,0,53,227,1,0,0,0,55,232,1,0,0,
  	0,57,237,1,0,0,0,59,239,1,0,0,0,61,241,1,0,0,0,63,243,1,0,0,0,65,245,
  	1,0,0,0,67,247,1,0,0,0,69,249,1,0,0,0,71,251,1,0,0,0,73,253,1,0,0,0,75,
  	255,1,0,0,0,77,257,1,0,0,0,79,259,1,0,0,0,81,261,1,0,0,0,83,263,1,0,0,
  	0,85,265,1,0,0,0,87,270,1,0,0,0,89,90,5,111,0,0,90,91,5,112,0,0,91,92,
  	5,101,0,0,92,93,5,110,0,0,93,2,1,0,0,0,94,95,5,99,0,0,95,96,5,108,0,0,
  	96,97,5,111,0,0,97,98,5,115,0,0,98,99,5,101,0,0,99,4,1,0,0,0,100,101,
  	5,105,0,0,101,102,5,110,0,0,102,103,5,105,0,0,103,104,5,116,0,0,104,6,
  	1,0,0,0,105,106,5,102,0,0,106,107,5,114,0,0,107,108,5,101,0,0,108,109,
  	5,101,0,0,109,8,1,0,0,0,110,119,5,109,0,0,111,112,5,109,0,0,112,113,5,
  	101,0,0,113,114,5,97,0,0,114,115,5,115,0,0,115,116,5,117,0,0,116,117,
  	5,114,0,0,117,119,5,101,0,0,118,110,1,0,0,0,118,111,1,0,0,0,119,10,1,
  	0,0,0,120,121,5,103,0,0,121,122,5,101,0,0,122,123,5,110,0,0,123,124,5,
  	69,0,0,124,125,5,110,0,0,125,126,5,116,0,0,126,12,1,0,0,0,127,128,5,101,
  	0,0,128,129,5,110,0,0,129,130,5,116,0,0,130,131,5,83,0,0,131,132,5,119,
  	0,0,132,133,5,97,0,0,133,134,5,112,0,0,134,14,1,0,0,0,135,136,5,114,0,
  	0,136,137,5,101,0,0,137,138,5,99,0,0,138,139,5,118,0,0,139,16,1,0,0,0,
  	140,141,5,115,0,0,141,142,5,101,0,0,142,143,5,110,0,0,143,144,5,100,0,
  	0,144,18,1,0,0,0,145,146,5,114,0,0,146,147,5,99,0,0,147,148,5,120,0,0,
  	148,149,5,99,0,0,149,20,1,0,0,0,150,151,5,114,0,0,151,152,5,99,0,0,152,
  	153,5,120,0,0,153,154,5,116,0,0,154,22,1,0,0,0,155,156,5,72,0,0,156,24,
  	1,0,0,0,157,158,5,88,0,0,158,26,1,0,0,0,159,160,5,89,0,0,160,28,1,0,0,
  	0,161,162,5,90,0,0,162,30,1,0,0,0,163,164,5,67,0,0,164,165,5,88,0,0,165,
  	32,1,0,0,0,166,167,5,67,0,0,167,168,5,90,0,0,168,34,1,0,0,0,169,170,5,
  	83,0,0,170,171,5,87,0,0,171,172,5,65,0,0,172,173,5,80,0,0,173,36,1,0,
  	0,0,174,178,7,0,0,0,175,177,7,1,0,0,176,175,1,0,0,0,177,180,1,0,0,0,178,
  	176,1,0,0,0,178,179,1,0,0,0,179,196,1,0,0,0,180,178,1,0,0,0,181,185,7,
  	2,0,0,182,184,7,1,0,0,183,182,1,0,0,0,184,187,1,0,0,0,185,183,1,0,0,0,
  	185,186,1,0,0,0,186,196,1,0,0,0,187,185,1,0,0,0,188,192,7,2,0,0,189,191,
  	7,3,0,0,190,189,1,0,0,0,191,194,1,0,0,0,192,190,1,0,0,0,192,193,1,0,0,
  	0,193,196,1,0,0,0,194,192,1,0,0,0,195,174,1,0,0,0,195,181,1,0,0,0,195,
  	188,1,0,0,0,196,38,1,0,0,0,197,198,3,41,20,0,198,200,5,46,0,0,199,201,
  	3,41,20,0,200,199,1,0,0,0,200,201,1,0,0,0,201,40,1,0,0,0,202,204,2,48,
  	57,0,203,202,1,0,0,0,204,205,1,0,0,0,205,203,1,0,0,0,205,206,1,0,0,0,
  	206,42,1,0,0,0,207,211,5,34,0,0,208,210,8,4,0,0,209,208,1,0,0,0,210,213,
  	1,0,0,0,211,209,1,0,0,0,211,212,1,0,0,0,212,214,1,0,0,0,213,211,1,0,0,
  	0,214,215,5,34,0,0,215,44,1,0,0,0,216,217,5,38,0,0,217,218,5,38,0,0,218,
  	46,1,0,0,0,219,220,5,124,0,0,220,221,5,124,0,0,221,48,1,0,0,0,222,223,
  	5,94,0,0,223,50,1,0,0,0,224,225,5,105,0,0,225,226,5,102,0,0,226,52,1,
  	0,0,0,227,228,5,101,0,0,228,229,5,108,0,0,229,230,5,115,0,0,230,231,5,
  	101,0,0,231,54,1,0,0,0,232,233,5,116,0,0,233,234,5,104,0,0,234,235,5,
  	101,0,0,235,236,5,110,0,0,236,56,1,0,0,0,237,238,5,123,0,0,238,58,1,0,
  	0,0,239,240,5,125,0,0,240,60,1,0,0,0,241,242,5,40,0,0,242,62,1,0,0,0,
  	243,244,5,41,0,0,244,64,1,0,0,0,245,246,5,91,0,0,246,66,1,0,0,0,247,248,
  	5,93,0,0,248,68,1,0,0,0,249,250,5,44,0,0,250,70,1,0,0,0,251,252,5,58,
  	0,0,252,72,1,0,0,0,253,254,5,59,0,0,254,74,1,0,0,0,255,256,5,46,0,0,256,
  	76,1,0,0,0,257,258,5,124,0,0,258,78,1,0,0,0,259,260,5,61,0,0,260,80,1,
  	0,0,0,261,262,5,33,0,0,262,82,1,0,0,0,263,264,5,63,0,0,264,84,1,0,0,0,
  	265,266,7,5,0,0,266,267,1,0,0,0,267,268,6,42,0,0,268,86,1,0,0,0,269,271,
  	5,13,0,0,270,269,1,0,0,0,270,271,1,0,0,0,271,272,1,0,0,0,272,273,5,10,
  	0,0,273,88,1,0,0,0,10,0,118,178,185,192,195,200,205,211,270,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  inquirlexerLexerStaticData = staticData.release();
}

}

InQuIRLexer::InQuIRLexer(CharStream *input) : Lexer(input) {
  InQuIRLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *inquirlexerLexerStaticData->atn, inquirlexerLexerStaticData->decisionToDFA, inquirlexerLexerStaticData->sharedContextCache);
}

InQuIRLexer::~InQuIRLexer() {
  delete _interpreter;
}

std::string InQuIRLexer::getGrammarFileName() const {
  return "InQuIRLexer.g4";
}

const std::vector<std::string>& InQuIRLexer::getRuleNames() const {
  return inquirlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& InQuIRLexer::getChannelNames() const {
  return inquirlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& InQuIRLexer::getModeNames() const {
  return inquirlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& InQuIRLexer::getVocabulary() const {
  return inquirlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView InQuIRLexer::getSerializedATN() const {
  return inquirlexerLexerStaticData->serializedATN;
}

const atn::ATN& InQuIRLexer::getATN() const {
  return *inquirlexerLexerStaticData->atn;
}




void InQuIRLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  inquirlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(inquirlexerLexerOnceFlag, inquirlexerLexerInitialize);
#endif
}
