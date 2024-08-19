/* main.c */
#include <stdio.h>
#include "token.h"
extern int yylex();
extern int yyval;

int main(){
    int token;
    while((token == yylex())){
        switch (token){
            case NUMBER;
                printf("constante decimal: %d \n", yyval);
                break;
            
            
            case PLUS:

            case  MINUS:

            case TIMES:

            case DIV:
                printf("codigo de token : %d \n",token);
                break;
            default:
                printf("codigo de token: %d \n",token)
        }
    }
    return 0;
}
