#!/bin/bash

# Initialize variables
option=""

antlr4="java -jar /usr/local/lib/antlr-4.13.1-complete.jar -Dlanguage=Cpp"
$antlr4 -o generated/ InQuIRLexer.g4 
$antlr4 -o generated/ InQuIRParser.g4

