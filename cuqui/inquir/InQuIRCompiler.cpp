#include "InQuIRtoNetQASMListener.hpp"
#include "InQuIRLexer.h"
#include "InQuIRCompiler.hpp"

using namespace antlr4;

void compile(const std::string &src) {
    ANTLRInputStream input(src);
    InQuIRLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    InQuIRParser parser(&tokens);

    InQuIRParser::MainprogramContext* tree = parser.mainprogram();

    //std::cout << tree->toStringTree(&parser) << std::endl;

    InQuIRtoNetQASMListener listener;
    tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
}