#!/bin/bash

# Initialize variables
option=""

case $1 in 
    -option)
        option=$2
        if [ ! -z "$3" ]; then
            filepath=$3
            echo "Generating parse of file: $filepath"
        else
            echo "No file path provided"
            exit 1
        fi
        ;;
    *) # Handle unknown options
        echo "Unknown option: $1"
        exit 1
esac

antlr4="java -jar /usr/local/lib/antlr-4.13.1-complete.jar"
$antlr4 -o generated/ InQuIRLexer.g4 
$antlr4 -o generated/ InQuIRParser.g4 

cd generated/
javac *.java

if [ ! -z "$option" ]; then
    grun="java org.antlr.v4.gui.TestRig"
    $grun InQuIR mainprogram -$option ../tree.ps ../$filepath
fi
