# InQuIR Compiler

In this work we are going to develop a compiler for InQuIR to NetQASM.

## Requirements

First you need to install ANTLR4. For doing this, follow the [The Definite ANTLR4 Reference](https://dl.icdst.org/pdfs/files3/a91ace57a8c4c8cdd9f1663e1051bf93.pdf). Note that the version employed in this book is the 4.0, for this work we employed the most recent one, in this time being the 4.13.1 version. Moreover, in order to execute ANTLR4 you have to install the Java SDK.

**Resume**
- ANTLR4: antlr-4.13.1
- Java SDK: openjdk-19.0.2

## Examples
### ANTLR4
To test the NetQASM lexer you just have to do (for Linux users):

1. antlr4 NetQASMLexer.g4
2. javac