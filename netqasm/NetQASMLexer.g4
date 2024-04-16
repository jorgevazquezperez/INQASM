lexer grammar NetQASM;

COMMENT
   : '#' ~ [\r\n]* -> channel(HIDDEN)
   ;

BLOCKCOMMENT
   : '/*' .*? '*/' -> channel(HIDDEN)
   ;

STRING
   : ["][A-Z_0-9.]*["]
   ;

NAME
   : [.A-Z_][A-Z0-9."_]*
   ;

COLON
   : ':'
   ;

NUMBER
   : '0x'? [0-9A-F]+
   | '-'? [0-9]+
   ;

EOL
   : [\r\n]+
   ;

WS
   : [ \t] -> skip
   ;