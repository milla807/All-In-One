/* In this Section we gonna check if input string is keyword, word or number */

%{
    #include <stdio.h>
    #include <string.h>
%}

%%

if |
else |
For |
printf {printf("%s is a keyword", yytext);}
[0-9]+ {printf("%s is a number", yytext);}
[a-zA-z]+ {printf("%s is a word", yytext);}
.|\n {ECHO;}
%%
int main(){
    printf("\n Enter the String: ");
    yylex();
}

int yywrap(){
    return 1;
}