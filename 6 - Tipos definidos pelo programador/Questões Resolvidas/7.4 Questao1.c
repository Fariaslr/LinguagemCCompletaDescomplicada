#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
1) Faça um programa que leia uma string e a imprima na tela.
*/
int main(){
    char UmChar[2];

    printf("Insira uma String: \n");
    fgets(UmChar,2,stdin);

    printf("\n%s\n",UmChar);
    system("pause");
    return 0;
}