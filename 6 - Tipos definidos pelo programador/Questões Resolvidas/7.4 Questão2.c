#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
2) Faça um programa que leia uma string e imprima as quatro primeiras letras dela.
*/
int main(){
    char QuatroLetras[4];

    printf("Insira uma String: \n");
    fgets(QuatroLetras,5,stdin);

    printf("%d carateres em ",strlen(QuatroLetras));
    fputs(QuatroLetras,stdout);
    putchar('\n');
    
    system("pause");
    return 0;
}