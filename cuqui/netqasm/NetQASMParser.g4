parser grammar NetQASMParser;

options { tokenVocab= NetQASMLexer; }

program
    : preamble EOF?
    | line* EOF
    ;

// You have to write the version number and the app ID before anything
preamble
    : version appid define* 
    ;

line
    : instruction
    | COMMENT
    ;

instruction
    : noOperandInstr
    | regInstr
    | regRegInstr
    | regImmImmInstr
    | regRegImmImmInstr
    | regRegImm4Instr
    | regRegRegInstr
    | regRegRegRegInstr
    | immInstr
    | immImmInstr
    | regRegImmInstr
    | regImmInstr
    | regEntryInstr
    | regAddrInstr
    | arrayEntryInstr
    | arraySliceInstr
    | addrInstr
    | reg5Instr
    | debugInstr
    ;

noOperandInstr
    :
    ;

regInstr
    : QALLOC Q_REG
    | INIT Q_REG
    | X Q_REG
    | Y Q_REG
    | Z Q_REG
    | H Q_REG
    | S Q_REG
    | K Q_REG
    | T Q_REG
    | QFREE Q_REG
    | RET_ARR ( C_REG | R_REG | Q_REG | M_REG )
    ;

regRegInstr
    : 
    ;

regImmImmInstr
    :
    ;

regRegImmImmInstr
    :
    ;

regRegImm4Instr
    :
    ;

regRegRegInstr
    :
    ;

regRegRegRegInstr
    :
    ;

immInstr
    :
    ;

immImmInstr
    :
    ;

regRegImmInstr
    :
    ;

regImmInstr
    :
    ;

regEntryInstr
    :
    ;

regAddrInstr
    :
    ;

arrayEntryInstr
    :
    ;

arraySliceInstr
    :
    ;

addrInstr
    :
    ;

reg5Instr
    :
    ;

debugInstr
    :
    ;

// Preamble directives
version : '#' PREAMBLE_NETQASM VERSION_NUMBER ;
appid : '#' PREAMBLE_APPID NUMBER ;
define : '#' PREAMBLE_DEFINE ID '{' instruction '}' ;
