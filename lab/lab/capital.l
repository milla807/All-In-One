%{
    #include <stdio.h>
%}

%%

[A-Z]+[ \t\n] {printf("%s\n", yytext);}
. ;
%%

int main(){
    printf("Enter words: ");
    yylex();
}

int yywrap(){
    return 1;
}