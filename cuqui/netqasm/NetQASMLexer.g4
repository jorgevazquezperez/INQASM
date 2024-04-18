lexer grammar NetQASMLexer;

//----------//
// OPERANDS
//----------//
IMMEDIATE : NUMBER ;
C_REG : 'C' NUMBER ;
R_REG : 'R' NUMBER ;
Q_REG : 'Q' NUMBER ;
M_REG : 'M' NUMBER ;
ADDRESS : '@' NUMBER ;
ARRAY_ENTRY : ADDRESS '[' NUMBER ']' ;
ARRAY_SLICE : ADDRESS '[' NUMBER ':' NUMBER ']' ;
VAR : [A-Z] [A-Z0-9_]* ;

// They consider a Template variable in the GitHub as as added operand

//--------------//
// INSTRUCTIONS
//--------------//

// Allocation
QALLOC : 'qalloc' ;
ARRAY : 'array' ;

// Initialization
INIT : 'init' ;
SET : 'set' ;

// Memory operations
STORE : 'store' ;
LOAD : 'load' ;
UNDEF : 'undef' ;
LEA : 'lea' ;

// Classic logic
JMP : 'jmp' ;
BEZ : 'bez' ;
BNZ : 'bnz' ;
BEQ : 'beq' ;
BNE : 'bne' ;
BLT : 'blt' ;
BGE : 'bge' ;

// Classic operations
ADD : 'add' ;
SUB : 'sub' ;
ADDM : 'addm' ;
SUBM : 'subm' ;

// Quantum gates
X : 'x' ;
Y : 'y' ;
Z : 'z' ;
H : 'h' ;
S : 's' ;
K : 'k' ;
T : 't' ;
ROT_X : 'rot_x' ;
ROT_Y : 'rot_y' ;
ROT_Z : 'rot_z' ;
CNOT : 'cnot' ;
CPHASE : 'cphase' ;
MEAS : 'meas' ;
PMR_XYX : 'pmr_xyx' ;
PMR_ZXZ : 'pmr_zxz' ;
PMR_YZY : 'pmr_yzy' ;
CREATE_EPR : 'create_epr' ;
RECV_EPR : 'recv_epr' ;

// Waiting
WAIT_ALL : 'wait_all' ;
WAIT_ANY : 'wait_any' ;
WAIT_SINGLE : 'wait_single' ;

// Deallocation
QFREE : 'qfree' ;

// Return
RET_REG : 'ret_reg' ;
RET_ARR : 'ret_arr' ;

//----------//
// PREAMBLE
//----------//
PREAMBLE_NETQASM : 'NETQASM' ;
PREAMBLE_APPID : 'APPID' ;
PREAMBLE_DEFINE : 'DEFINE' ;

//---------------//
// MISCELLANEOUS
//---------------//
COMMENT : '//' ~ [\r\n]* -> channel(HIDDEN) ;

//---------//
// SYMBOLS
//---------//
ID : [a-zA-Z_][a-zA-Z0-9_]* ;
VERSION_NUMBER : NUMBER '.' NUMBER ;
NUMBER : [0-9]+ ;
EOL : [\r\n]+ ;
WS : [ \t] -> skip ;