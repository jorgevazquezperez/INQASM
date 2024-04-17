parser grammar NetQASM;

options { tokenVocab= NetQASMLexer; }

program
    : preprocessing* EOF?
    | line* EOF
    ;

preprocessing
    : '#' NETQASM NUMBER '.' NUMBER EOL ( '#'  )

line
    : preprocessing ( EOLinstructions | assemblerdirectives | comment)*?
    ;