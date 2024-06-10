#include <iostream>

#include "InQuIRCompiler.hpp"

const char * inquir_example = R"""(
  0 {
  world = open[0,1,2,3,4,5,6,7];
  q0 = init();
  _cq0 = genEnt[1](l0);
  CX q0 _cq0;
  _m0 = measure _cq0;
  free _cq0;
  send[1](world, l1:_m0);
  recv(world, l1_2:_m1);
  Z[_m1] q0;
}
1 {
  world = open[0,1,2,3,4,5,6,7];
  q2 = init();
  _cq1 = genEnt[0](l0);
  CX _cq1 q2;
  H _cq1;
  _m2 = measure _cq1;
  free _cq1;
  send[0](world, l1_2:_m2);
  recv(world, l1:_m3);
  X[_m3] q2;
  c2 = measure q2;
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