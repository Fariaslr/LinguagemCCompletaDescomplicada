#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
4) Faça um programa que leia uma string e a imprima de trás para a frente.
*/
int main(){
    char Palavra[30];
    int QuantCaracter;
    int i=0;
    
    fflush(stdin);
    printf("Insira a sua escrita: ");
    fgets(Palavra,30,stdin);

    QuantCaracter = strlen(Palavra) - 1;

    for ( i = QuantCaracter; i > 0; i--)
    {
        ("%c",Palavra[i]);
    }
    
    putchar('\n');
    system("pause");
    
    return 0;
}