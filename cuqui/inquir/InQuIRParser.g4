parser grammar InQuIR;

options {
    tokenVocab = InQuIRLexer;
}

mainprogram
    : system
    ;

system
    : '0'
    | INT '{' process '}'
    | '(' system '|' system ')'
    ;

process 
    : STOP
    | function ';' process
    | value '=' expression ';' process
    | gate '(' expression (',' expression)* ')' ';' process
    | 'if' expression 'then' process 'else' process 
    | session '[' process ']' '!(' label ':' expression ');' process
    | session '?(' label ':' expression ');' process
    ;

function
    : system '=' OPEN '[' participant (',' participant)* ']'
    | CLOSE (session) ';' process
    | value '=' INIT '()' ';' process
    | FREE value ';' process
    | value '=' MEASURE '(' expression (',' expression)* ')' ';' process
    | value '=' GENENT '[' process ']' '(' label ')' ';' process
    | '(' value ',' value ')' '=' ENTSWAP '(' expression ',' expression ')' ';' process
    | value '=' QRECV '(' session ',' label ',' expression ')' ';' process
    | value '=' QSEND '[' process ']' '(' session ',' label ',' expression ',' expression ')' ';' process 
    | RCXC '[' process ']' '(' session ',' label ',' expression ',' expression ')' ';' process
    | RCXT '[' process ']' '(' session ',' label ',' expression ',' expression ')' ';' process
    ;

expression
    : value
    | expression '&&' expression
    | expression '||' expression
    | expression '^' expression
    | '(' expression ')'
    ;

value
    : dataqubit
    | commqubit
    | INT
    | ID
    ;

gate
    : 'X'
    | 'Y'
    | 'Z'
    | 'H'
    | 'CX'
    | 'CZ'
    | 'SWAP'
    ;

session: ID;
participant: INT;
label: ID;
dataqubit: ID;
commqubit: ID;
