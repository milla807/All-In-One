/*lex program to count number of newline and number of charachter*/
%{
#include<stdio.h>
#include<string.h>
  int num_lines = 0;
  int num_chars = 0;
%}
%%
\n {++num_lines; ++num_chars;}
. {++num_chars;}
%%
int yywrap(void){}
int main(int argc, char **argv)
{
printf("please enter the strings to count newline and charachter\n");
  yylex();
  printf("# of lines = %d, # of chars = %d\n", num_lines, num_chars);
}