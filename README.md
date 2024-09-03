# INQASM: An InQuIR compiler to NetQASM

In this work we are going to develop a compiler for InQuIR to NetQASM. The [InQuIR language](https://arxiv.org/abs/2302.00267) is presented to create a intermediate representation for distributed quantum computing (DQC). In this work is employed as reference, although some changes might be introduced to adjust the theoretical work to an actual implementation. Moreover, the [NetQASM language](https://iopscience.iop.org/article/10.1088/2058-9565/ac753f) is the language chosen to compile (although it should almost be said *traspile*, in the classical sense) to because it is intended to be a lower level than the InQuIR. 

For this purpose, we have written a grammar for InQuIR programs in order to compile them to NetQASM subroutines.

## Requirements

This process is explained for Linux users. First you need to install ANTLR4. For doing this, follow the [The Definite ANTLR4 Reference](https://dl.icdst.org/pdfs/files3/a91ace57a8c4c8cdd9f1663e1051bf93.pdf). Note that the version employed in this book is the 4.0, for this work we employed the most recent one, in this time being, the 4.13.1 version. Moreover, in order to execute ANTLR4 you have to install the Java SDK. In terms of quantum software, NetQASM and SquidASM have to be installed. In order to be able to install SquidASM an account on NetSQUID has to be created. Every step of the installation is depicted in their respective repository or website, as in ANTLR.

**Sum up**
- ANTLR4: antlr-4.13.1
- Java SDK: openjdk-19.0.2
- NetQASM: 0.15.1
- SquidASM: 0.12.2
- cxxopts: 3.2.1

## Installation and usage

After all the dependencies have been installed, to install the INQASM compiler the following lines have to be executed from the root of the
repository:

```console
mkdir build
cd build
cmake ..
make install
```

The `make` directive can be executed without the `install` clause. As default, the INQASM command will be installed in the `usr/local` folder. To change this two methods can be employed.

1. Changing the variable `CMAKE_INSTALL_PREFIX` value while performing the `cmake` operation.

```console
cmake -DCMAKE_INSTALL_PREFIX=<folder_path> ..
```

2. Changing the variable `CMAKE_INSTALL_PREFIX` value by exporting it before executing the `cmake` operation.

```console
export CMAKE_INSTALL_PREFIX=<folder_path>
cmake ..
```

After this, if the folder you chose is in the `PATH` variable, in order to employ the INQASM compiler the following line has to be executed:

```console
inqasm -f <file_name>
```

Where `<file_name>` is the name of the InQuIR file to be compiled to NetQASM. For example go to the `examples` folder.

## Examples

### ANTLR4
To test the **InQuIR lexer** you just have to do:

```console
antlr4 -o test/ InQuIRLexer.g4
javac InQuIRLexer.java
grun InQuIR tokens -tokens <inquir_file>
```
where `<inquir_file>` is the file containing the NetQASM subroutine. To be able to execute the previous commands, some preliminary work has to be done to configure the system. Specifically, in `./~bashrc` the following lines have to be added:

```console
export CLASSPATH=".:/usr/local/lib/antlr-4.13.1-complete.jar:$CLASSPATH"
alias antlr4="java -jar /usr/local/lib/antlr-4.13.1-complete.jar"
alias grun="java org.antlr.v4.gui.TestRig"
```

The last line, corresponding to the `grun` command, is different from the one specified on the [The Definite ANTLR4 Reference](https://dl.icdst.org/pdfs/files3/a91ace57a8c4c8cdd9f1663e1051bf93.pdf) due to the change of location of TestRig in ANTLR4 version 4.13.1 (in the aforementioned book the version 4.0 is employed).
