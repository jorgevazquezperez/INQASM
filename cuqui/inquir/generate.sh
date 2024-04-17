LOCATION=/home/jvazquez/Proyectos/InQuIR_Compiler/antlr-4.13.1-complete.jar
java -jar $LOCATION -Dlanguage=Cpp -listener -o generated/ -package inquir InQuIRParser.g4