#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
3) Sem usar a função strlen(), faça um programa que leia uma string e imprima 
quantos caracteres ela possui.
*/
int main(){
    char Caracter[30];
    int QuantCaracter;
    int i=0;
    
    fflush(stdin);
    printf("Insira a sua escrita: ");
    fgets(Caracter,30,stdin);

    while (Caracter[i]!= '\0')
    {
        i++;
        QuantCaracter++;
    }
    QuantCaracter = QuantCaracter -1;
    
    printf("A palavra %spossui %d letras\n",Caracter,QuantCaracter);    
    system("pause");
    
    return 0;
}