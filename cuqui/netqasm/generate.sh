#!/bin/bash

rm -r generated/

antlr4="java -jar /usr/local/lib/antlr-4.13.1-complete.jar"
$antlr4 -o generated/ NetQASMLexer.g4 
$antlr4 -o generated/ NetQASMParser.g4 

cd generated/
javac *.java