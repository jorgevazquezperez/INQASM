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
    : regInstr
    | regRegInstr
    | regImmImmInstr
    | regRegRegInstr
    | regRegRegRegInstr
    | immInstr
    | regRegImmInstr
    | regImmInstr
    | regEntryInstr
    | regAddrInstr
    | arrayEntryInstr
    | arraySliceInstr
    | addrInstr
    | reg5Instr
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
    : CNOT Q_REG Q_REG
    | CPHASE Q_REG Q_REG
    | MEAS Q_REG M_REG
    ;

regImmImmInstr
    : ROT_X Q_REG IMMEDIATE IMMEDIATE
    | ROT_Y Q_REG IMMEDIATE IMMEDIATE
    | ROT_Z Q_REG IMMEDIATE IMMEDIATE
    ;

regRegRegInstr
    : ADD R_REG classicalReg classicalReg
    | SUB R_REG classicalReg classicalReg
    ;

regRegRegRegInstr
    : ADDM R_REG classicalReg classicalReg classicalReg
    | SUBM R_REG classicalReg classicalReg classicalReg
    | RECV_EPR (R_REG | C_REG) (R_REG | C_REG) ( R_REG | C_REG ) ( R_REG | C_REG )
    ;

immInstr
    : JMP LINE_NUMBER
    ;

regRegImmInstr
    : BEQ classicalReg classicalReg IMMEDIATE
    | BNE classicalReg classicalReg IMMEDIATE
    | BLT classicalReg classicalReg IMMEDIATE
    | BGE classicalReg classicalReg IMMEDIATE
    ;

regImmInstr
    : ARRAY IMMEDIATE ADDRESS
    | SET C_REG IMMEDIATE
    | SET R_REG IMMEDIATE
    | BEZ classicalReg IMMEDIATE
    | BNZ classicalReg IMMEDIATE
    ;

regEntryInstr
    : STORE classicalReg ARRAY_ENTRY
    | LOAD R_REG ARRAY_ENTRY
    ;

regAddrInstr
    : LEA R_REG ADDRESS
    ;

arrayEntryInstr
    : UNDEF ARRAY_ENTRY
    ;

arraySliceInstr
    : WAIT_ALL ARRAY_SLICE
    | WAIT_ANY ARRAY_SLICE
    | WAIT_SINGLE ARRAY_SLICE
    ;

addrInstr
    : RET_ARR ADDRESS
    ;

reg5Instr
    : CREATE_EPR (R_REG | C_REG) (R_REG | C_REG) ( R_REG | C_REG ) ( R_REG | C_REG ) ( R_REG | C_REG )
    ;

// Inclusion of a broader group of registers: the classical ones to simplify the code
classicalReg
    : C_REG
    | R_REG
    | M_REG
    ;

// Preamble directives
version : '#' PREAMBLE_NETQASM VERSION_NUMBER ;
appid : '#' PREAMBLE_APPID NUMBER ;
define : '#' PREAMBLE_DEFINE ID '{' instruction '}' ;
