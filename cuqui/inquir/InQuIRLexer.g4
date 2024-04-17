lexer grammar InQuIR;

// Keywords
STOP: 'stop';
OPEN: 'open';
CLOSE: 'close';
INIT: 'init';
FREE: 'free';
MEASURE: 'm' | 'measure';
GENENT: 'genEnt';
ENTSWAP: 'entSwap';
QRECV: 'qrecv';
QSEND: 'qsend';
RCXC: 'rcxc';
RCXT: 'rcxt';

ID
   : [a-z][A-Za-z0-9_]*
   | [A-Z][A-Za-z0-9_]*
   | [A-Z][A-Za-z]*
   ;

REAL
   : INT ( '.' (INT)? )
   ;


INT : ('0'..'9') + ;

// Strings are enclosed in double quotes
STRING
   : '"' ~ ["]* '"'
   ;

// Whitespaces
WS
   : [ \t\r\n] -> skip
   ;

// End of the line
EOL
: '\r'? '\n'
;
