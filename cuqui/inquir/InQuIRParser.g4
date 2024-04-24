parser grammar InQuIRParser;

options {
    tokenVocab = InQuIRLexer;
}

mainprogram
    : system
    ;

system
    : process* EOF
    | LPAREN system VERT system RPAREN EOF
    ;

process 
    : participant LCURLY instruction* RCURLY 
    ;

instruction
    : function SEMICOLON
    | value EQUAL expression SEMICOLON 
    | quantum_instruction SEMICOLON
    | IF expression THEN process ELSE process 
    | session LBRACK process RBRACK EXCLAM LPAREN label COLON expression RPAREN SEMICOLON
    | session QUESTION LPAREN label COLON expression RPAREN SEMICOLON
    ;

function
    : session EQUAL OPEN LBRACK participant (COMMA participant)* RBRACK     // OPEN
    | CLOSE (session)                                                       // CLOSE
    | value EQUAL INIT LPAREN RPAREN                                        // INIT
    | FREE value                                                            // FREE
    | value EQUAL MEASURE qubit                                             // MEASURE
    | value EQUAL GENENT LBRACK participant RBRACK LPAREN label RPAREN      // GENENT
    | LPAREN value COMMA value RPAREN EQUAL ENTSWAP                         // ENTSWAP
        LPAREN expression COMMA expression RPAREN
    | RECV LPAREN session COMMA label COLON value RPAREN  // QRECV 
    | SEND LBRACK participant RBRACK LPAREN session COMMA label COLON value RPAREN    // QSEND
        COMMA expression COMMA expression RPAREN
    | RCXC LBRACK participant RBRACK LPAREN session COMMA label COMMA       // RCXC
        expression COMMA expression RPAREN
    | RCXT LBRACK participant RBRACK LPAREN session COMMA label COMMA       // RCXT
        expression COMMA expression RPAREN
    ;

quantum_instruction
    : gate qubit qubit*
    | gate LBRACK value RBRACK qubit qubit* // this is incorrect given the defeinition of value
    ;

expression
    : value
    | expression AND expression
    | expression OR expression
    | expression XOR expression
    | LPAREN expression RPAREN
    ;

value
    : qubit
    | INT
    | ID
    ;

gate
    : X
    | Y
    | Z
    | H
    | CX
    | CZ
    | SWAP
    ;

session: ID;
participant: INT;
label: ID;
qubit: ID;
