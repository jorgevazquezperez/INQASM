# InQuIR Compiler

In this work we are going to develop a compiler for InQuIR to NetQASM.

## Requirements

We will only explain the process for Linux users, although all of what is explained has also been executed using WSL.

First you need to install ANTLR4. For doing this, follow the [The Definite ANTLR4 Reference](https://dl.icdst.org/pdfs/files3/a91ace57a8c4c8cdd9f1663e1051bf93.pdf). Note that the version employed in this book is the 4.0, for this work we employed the most recent one, in this time being the 4.13.1 version. Moreover, in order to execute ANTLR4 you have to install the Java SDK.

**Resume**
- ANTLR4: antlr-4.13.1
- Java SDK: openjdk-19.0.2

## Examples
### ANTLR4
To test the **NetQASM lexer** you just have to do:

```console
foo@bar:~$ antlr4 -o test/ NetQASMLexer.g4
foo@bar:~$ javac NetQASMLexer.java
foo@bar:~$ grun NetQASM tokens -tokens test.txt
```
where test.txt is the file containing the NetQASM subroutine. To be able to execute the previous commands, some preliminary work has to be done to configure the system. Specifically, in `./~bashrc` the following lines have to be added:

```console
export CLASSPATH=".:/usr/local/lib/antlr-4.13.1-complete.jar:$CLASSPATH"
alias antlr4="java -jar /usr/local/lib/antlr-4.13.1-complete.jar"
alias grun="java org.antlr.v4.gui.TestRig"
```

The last line, corresponding to the grun command, is different from the one specified on the [The Definite ANTLR4 Reference](https://dl.icdst.org/pdfs/files3/a91ace57a8c4c8cdd9f1663e1051bf93.pdf) due to the change of location of TestRig in ANTLR4 version 4.13.1 (in the aforementioned book the version 4.0 is employed).