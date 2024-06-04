#include <iostream>

#include "antlr4-runtime.h"
#include "InQuIRLexer.h"
#include "InQuIRParser.h"
//#include "ImageVisitor.h"

using namespace std;
using namespace antlr4;

int main(int argc, const char* argv[]) {
    std::ifstream stream;
    stream.open("input.inq");
    
    ANTLRInputStream input(stream);
    InQuIRLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    InQuIRParser parser(&tokens);    

    //InQuIRParser::FileContext* tree = parser.file();

    /*ImageVisitor visitor;
    Scene scene = std::any_cast<Scene>(visitor.visitFile(tree));
    scene.draw();*/
    std::cout << "Hello, esto va:" << parser.getGrammarFileName() << std::endl;

    return 0;
}