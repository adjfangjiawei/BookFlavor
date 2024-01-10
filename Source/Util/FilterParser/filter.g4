grammar filter;

filter  : statement* EOF ;

statement: varDeclaration ';'
         | functionDeclaration ';'
         | classDeclaration ';'
         | enumDeclaration ';' 
         | expression ';'
         | macroDeclaration ';'
         | mixinDeclaration ';' 
         | errorStatement ';' 
         | moduleDeclaration ';' 
         | packageDeclaration ';'
         | importStatement ';' 
         | typeAliasDeclaration ';' 
         | operatorOverloadDeclaration ';' // Added operator overload declaration
         | switchStatement ';' // Added switch statement
         | assignment ';' ;

assignment: ID '=' expression ;

typeAliasDeclaration: 'USING' ID '=' type ; // Type alias declaration

moduleDeclaration: 'MODULE' ID '{' statement* '}' ; 

packageDeclaration: 'PACKAGE' ID '{' statement* '}' ; 

importStatement: 'IMPORT' (ID ('.' ID)*) ; 

enumDeclaration: 'ENUM' ID '{' ID (',' ID)* '}' ; 

errorStatement: 'ERROR' STRING ; 

procMacroDeclaration: 'PROC_MACRO' ID '(' (param (',' param)*)? ')' '{' statement* '}' ;

procMacroInvocation: ID '!' '(' expression ')' ;

macroDeclaration: 'MACRO' ID '(' (param (',' param)*)? ')' '{' statement* '}' ;

mixinDeclaration: 'MIXIN' ID '{' (varDeclaration | functionDeclaration)* '}' ; 

varDeclaration: ('PUBLIC' | 'PRIVATE')? 'VAR' ID ':' type '=' expression
              | ('PUBLIC' | 'PRIVATE')? 'VAR' ID '=' expression ; 

operatorOverloadDeclaration: 'OPERATOR' ID '(' param ',' param ')' '{' statement* '}' ; // Operator overload declaration

switchStatement: 'SWITCH' '(' expression ')' '{' (caseStatement)* '}' ; // Switch statement

caseStatement: 'CASE' expression ':' statement* ; // Case statement

foldExpression: '(' type '...' foldOperator ')'  // Unary fold
              | '(' type foldOperator '...' ')'  // Binary fold
              | '(' '...' foldOperator type ')'  // Right fold
              | '(' type '...' foldOperator type ')' ; // Left fold

foldOperator: '+' | '-' | '*' | '/' | '%' | '&&' | '||' | '&' | '|' | '^' | '<<' | '>>' ;

typeclassDeclaration: 'TYPECLASS' ID '{' (functionDeclaration | fmapDeclaration)* '}' ; // Typeclass declaration

fmapDeclaration: 'FMAP' '(' param ',' param ')' ':' type '{' statement* '}' ; // Fmap declaration

functionDeclaration: ('PUBLIC' | 'PRIVATE')? 'FUNCTION' ID '(' (param (',' param)*)? ')' ':' type '{' statement* '}' 
                   | ('PUBLIC' | 'PRIVATE')? 'FUNCTION' ID '<' templateParam ('...' templateParam)* '>' '(' (param (',' param)*)? ')' ':' type '{' statement* '}'  
                   | ('PUBLIC' | 'PRIVATE')? 'FUNCTION' ID ':' typeclassDeclaration '{' statement* '}' 
                   | ('PUBLIC' | 'PRIVATE')? 'VIRTUAL' 'FUNCTION' ID '(' (param (',' param)*)? ')' ':' type '{' statement* '}' ;

classDeclaration: 'CLASS' ID '{' (accessSpecifier statement)* '}' 
                | 'CLASS' ID '<' templateParam ('...' templateParam)* '>' '{' (accessSpecifier statement)* '}' 
                | 'CLASS' ID ':' ID '{' (accessSpecifier statement)* '}' ; 

accessSpecifier: ('PUBLIC' ':' | 'PRIVATE' ':')? (varDeclaration | functionDeclaration | mixinDeclaration | typeclassDeclaration)* ;

templateParam: type | ID '<' templateParam ('...' templateParam)* '>' ; 

param   : ID ':' type ;

type    : 'INT' | 'FLOAT' | 'STRING' | 'BOOL' | 'DATE' | 'TIME' | 'ARRAY' | 'DICT' | 'POINTER' '<' templateParam '>' | 'FUNCTION' '<' templateParam '>' | 'LAMBDA' '<' templateParam '>' | 'JSON' | 'AUTO' | ID | enumDeclaration ; 

primary : value
        | ID
        | function
        | atom ;

expression : primary
           | expression '+' expression
           | expression '-' expression
           | expression '*' expression
           | expression '/' expression
           | expression '%' expression
           | expression '==' expression
           | expression '!=' expression
           | expression '<' expression
           | expression '>' expression
           | expression '<=' expression
           | expression '>=' expression
           | expression 'AND' expression
           | expression 'OR' expression
           | expression 'XOR' expression
           | 'NOT' expression
           | 'IF' '(' expression ')' 'THEN' expression 'ELSE' expression
           | 'FOR' '(' varDeclaration ';' expression ';' expression ')' '{' statement* '}'
           | 'FOR' '(' expression ')' '{' statement* '}' // Added Go-style for loop
           | '(' expression ')'
           | expression '##' expression ;

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
           | ID '[' NUMBER ']'  
           | ID '[' NUMBER ':' NUMBER ']' ;

value    : STRING | NUMBER | ID | 'TRUE' | 'FALSE' | 'DATE' | 'TIME' | 'JSON' 
         | ID '<' type '>' '(' valueList ')'  
         | ID '<' type '>' '(' ')' ;

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
NOT      : 'NOT' ;
COMMENT  : '/*' .*? '*/' -> skip ;
WS       : [ \t\r\n]+ -> skip ;