grammar Filter;

filter  : statement* EOF ;

statement: varDeclaration ';'
         | functionDeclaration ';'
         | classDeclaration ';'
         | expression ';'
         | macroDeclaration ';'
         | mixinDeclaration ';' // Added mixin declaration
         | errorStatement ';' ; // Added error statement

errorStatement: 'ERROR' STRING ; // Error statement

procMacroDeclaration: 'PROC_MACRO' ID '(' (param (',' param)*)? ')' '{' statement* '}' ;

procMacroInvocation: ID '!' '(' expression ')' ;

macroDeclaration: 'MACRO' ID '(' (param (',' param)*)? ')' '{' statement* '}' ;

mixinDeclaration: 'MIXIN' ID '{' (varDeclaration | functionDeclaration)* '}' ; // Mixin declaration

varDeclaration: 'VAR' ID ':' type '=' expression
              | 'VAR' ID '=' expression ; // Added auto type inference

foldExpression: '(' type '...' foldOperator ')'  // Unary fold
              | '(' type foldOperator '...' ')'  // Binary fold
              | '(' '...' foldOperator type ')'  // Right fold
              | '(' type '...' foldOperator type ')' ; // Left fold

foldOperator: '+' | '-' | '*' | '/' | '%' | '&&' | '||' | '&' | '|' | '^' | '<<' | '>>' ;

typeclassDeclaration: 'TYPECLASS' ID '{' (functionDeclaration | fmapDeclaration)* '}' ; // Typeclass declaration

fmapDeclaration: 'FMAP' '(' param ',' param ')' ':' type '{' statement* '}' ; // Fmap declaration

// Modify functionDeclaration to include typeclass functions
functionDeclaration: 'FUNCTION' ID '(' (param (',' param)*)? ')' ':' type '{' statement* '}' 
                   | 'FUNCTION' ID '<' type ('...' type)* '>' '(' (param (',' param)*)? ')' ':' type '{' statement* '}'  // Existing template function declaration with variadic templates
                   | 'FUNCTION' ID '<' type ('...' type)* '>' '(' (param (',' param)*)? ')' ':' type '{' foldExpression* '}'  // Added template function declaration with fold expressions
                   | 'FUNCTION' ID ':' typeclassDeclaration '{' statement* '}' ; // Added typeclass function declaration

// Modify classDeclaration to include typeclass instances
classDeclaration: 'CLASS' ID '{' (varDeclaration | functionDeclaration | mixinDeclaration | typeclassDeclaration)* '}' 
                | 'CLASS' ID '<' type ('...' type)* '>' '{' (varDeclaration | functionDeclaration | mixinDeclaration | typeclassDeclaration | foldExpression)* '}' ; // Added template class declaration with typeclass instances

param   : ID ':' type ;

type    : 'INT' | 'FLOAT' | 'STRING' | 'BOOL' | 'DATE' | 'TIME' | 'ARRAY' | 'DICT' | 'POINTER' '<' type '>' | 'FUNCTION' '<' type '>' | 'LAMBDA' '<' type '>' | 'JSON' | 'AUTO' | ID ;

expression : expression 'OR' expression
           | expression 'AND' expression
           | expression 'XOR' expression
           | 'IF' '(' expression ')' 'THEN' expression 'ELSE' expression
           | 'FOR' '(' varDeclaration ';' expression ';' expression ')' '{' statement* '}'
           | '(' expression ')'
           | NOT expression
           | atom
           | function 
           | lambda 
           | ID '(' valueList ')'  
           | ID '(' ')'
           | procMacroInvocation  // Added procMacroInvocation
           | expression '##' expression ; // Added new operator ##

atom     : ID 'IN' '(' valueList ')' 
           | ID '=' value
           | ID '!=' value
           | ID '>' value
           | ID '<' value
           | ID '>=' value
           | ID '<=' value
           | ID 'LIKE' STRING
           | ID 'BETWEEN' value 'AND' value
           | ID '.' ID '(' valueList ')'  
           | ID 'CONTAINS' STRING
           | ID '[' NUMBER ']'  // Array access
           | ID '[' NUMBER ':' NUMBER ']' ; // Array slicing

value    : STRING | NUMBER | ID | 'TRUE' | 'FALSE' | 'DATE' | 'TIME' | 'JSON' 
         | ID '<' type '>' '(' valueList ')'  // Added template object creation
         | ID '<' type '>' '(' ')' ; // Added template function call

valueList: value (',' value)* ;

function : ID '(' ')' 
           | ID '(' valueList ')' 
           | ID '(' '*' ')' 'AS' ID
           | 'COUNT' '(' '*' ')' 'AS' ID
           | 'SUM' '(' '*' ')' 'AS' ID
           | 'AVG' '(' '*' ')' 'AS' ID
           | 'GROUP' 'BY' valueList ;

lambda   : '(' paramList ')' '=>' '{' statement* '}' ;

paramList: param (',' param)* ;

ID       : [a-zA-Z_][a-zA-Z_0-9]* ;
STRING   : '"' (~["\\] | '\\' ["\\])* '"' ;
NUMBER   : [0-9]+ ('.' [0-9]+)? ;
DATE     : '"' [0-9]{4}-[0-9]{2}-[0-9]{2} '"' ;
TIME     : '"' [0-9]{2}':'[0-9]{2}':'[0-9]{2} '"' ;
NOT      : 'NOT' ;
COMMENT  : '/*' .*? '*/' -> skip ; // Added comment rule
WS       : [ \t\r\n]+ -> skip ;