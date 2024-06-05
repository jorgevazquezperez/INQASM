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
    : participant LCURLY line* RCURLY 
    ;

line
    : function SEMICOLON #FunctionLine
    | quantum_instruction SEMICOLON #QuantumInstructionLine
    //| value EQUAL expression SEMICOLON 
    //| IF expression THEN process ELSE process 
    //| session LBRACK process RBRACK EXCLAM LPAREN label COLON expression RPAREN SEMICOLON
    //| session QUESTION LPAREN label COLON expression RPAREN SEMICOLON
    ;

function
    : session EQUAL OPEN LBRACK participant (COMMA participant)* RBRACK                 #Open
    | CLOSE (session)                                                                   #Close
    | value EQUAL INIT LPAREN RPAREN                                                    #Init
    | FREE value                                                                        #Free
    | value EQUAL MEASURE qubit                                                         #Measure
    | value EQUAL GENENT LBRACK participant RBRACK LPAREN label RPAREN                  #GenEnt
    | LPAREN value COMMA value RPAREN EQUAL ENTSWAP                                     
        LPAREN expression COMMA expression RPAREN                                       #EntSwap
    | RECV LPAREN session COMMA label COLON value RPAREN                                #Recv 
    | SEND LBRACK participant RBRACK LPAREN session COMMA label COLON value RPAREN      #Send
    | RCXC LBRACK participant RBRACK LPAREN session COMMA label COMMA                   
        expression COMMA expression RPAREN                                              #RCXC
    | RCXT LBRACK participant RBRACK LPAREN session COMMA label COMMA                   
        expression COMMA expression RPAREN                                              #RCXT                                 
    ;

quantum_instruction
    : gate qubit qubit*                                                                 #UsualGate
    | gate LBRACK value RBRACK qubit qubit*                                             #ConditionalGate 
    // this is incorrect given the defeinition of value
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
