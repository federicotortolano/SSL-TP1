/*  TRABAJO PRÁCTICO N°1
    TORTOLANO FEDERICO  */

#include <stdio.h>
#include <ctype.h>

int main (void){

    char c;
    while ((c=getchar()) != EOF){
        if (isdigit(c)){}
            else if(isupper(c)){
                c = tolower(c);
                putchar(c);
            }    else if(islower){
                    c = toupper(c);
                    putchar(c);
                }
    }
    return 0;
}