lexer grammar InQuIRLexer;

// Keywords
OPEN: 'open';
CLOSE: 'close';
INIT: 'init';
FREE: 'free';
MEASURE: 'm' | 'measure';
GENENT: 'genEnt';
ENTSWAP: 'entSwap';
RECV: 'recv';
SEND: 'send';
RCXC: 'rcxc';
RCXT: 'rcxt';

// Gates
H: 'H';
X: 'X';
Y: 'Y';
Z: 'Z';
CX: 'CX';
CZ: 'CZ';
SWAP: 'SWAP';

ID
   : [a-z_][A-Za-z0-9_]*
   | [A-Z_][A-Za-z0-9_]*
   | [A-Z_][A-Za-z]*
   ;

REAL : INT ( '.' (INT)? );

INT : ('0'..'9') + ;

// Strings are enclosed in double quotes
STRING
   : '"' ~ ["]* '"'
   ;

// Logical operators
AND : '&&';
OR : '||';
XOR : '^';

// Branch
IF : 'if';
ELSE : 'else';
THEN : 'then';

// Characters
LCURLY: '{';
RCURLY: '}';
LPAREN: '(';
RPAREN: ')';
LBRACK: '[';
RBRACK: ']';
COMMA: ',';
COLON: ':';
SEMICOLON: ';';
DOT: '.';
VERT: '|';
EQUAL: '=';
EXCLAM: '!';
QUESTION: '?';

// Whitespaces
WS
   : [ \t\r\n] -> skip
   ;

// End of the line
EOL
: '\r'? '\n'
;