%{
    #include <stdio.h>
%}

%%

[aeiouAEIOU]+ {i++;} {printf("%s is vowel", yytext);}
[^aeiouAEIOU]+ {i++;} {printf("%s is consonant", yytext);}

%%

int main(){
    printf("\nEnter The Word: ");
    yylex();
}

int yywrap(){
    return 1;
}