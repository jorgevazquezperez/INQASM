#include <iostream>

#include "InQuIRCompiler.hpp"

const char * inquir_example = R"""(
    0 {
    world = open[0,1,2,3,4,5,6,7];
    q0 = init();
    q1 = init();
    _cq0 = genEnt[1](l0);
    CX q0 _cq0;
    _m0 = measure _cq0;
    free _cq0;
    send[1](world, l1:_m0);
    recv(world, l1_2:_m1);
    Z[_m1] q0;
    c0 = measure q0;
    c1 = measure q1;

}
)""";

using namespace std;
//using namespace antlr4;

int main(int argc, const char* argv[]) {
    //std::ifstream stream;
    //stream.open("input.inq");
    
    /*ANTLRInputStream input(stream);
    InQuIRLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    InQuIRParser parser(&tokens);    
    */
    //InQuIRParser::FileContext* tree = parser.file();

    /*ImageVisitor visitor;
    Scene scene = std::any_cast<Scene>(visitor.visitFile(tree));
    scene.draw();*/

    compile(inquir_example);

    return 0;
}