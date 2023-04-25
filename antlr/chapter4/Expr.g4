// 解析表达式的语法

grammar Expr;

// 一个程序有多个语句
prog: stat+ ;

// 定义一条语句
stat: expr NEWLINE
    | ID '=' expr NEWLINE
    | NEWLINE
    ;

// 定义表达式的嵌套关系
expr: expr ('*'|'/') expr   // 优先处理乘除
    | expr ('+'|'-') expr   // 表达式嵌套
    | INT
    | ID
    | '(' expr ')'
    ;

ID: [a-zA-Z]+ ;
INT: [0-9]+ ;
NEWLINE: '\r'? '\n' ;
WS: [ \t]+ -> skip ;

