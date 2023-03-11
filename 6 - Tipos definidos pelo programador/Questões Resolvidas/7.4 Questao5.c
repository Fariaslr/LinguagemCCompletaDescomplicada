#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
5) Faça um programa que leia uma string e a inverta. A string invertida deve ser armazenada na mesma variável. Em seguida, imprima a string invertida.
*/
void InverteArmazena(char vet []){
    int i,aux,fim,tam = strlen(vet);

    fim = tam - 1;
    for (i = 0; i < tam/2; i++)
    {
        aux = vet[i];
        vet[i] = vet[fim];
        vet[fim] = aux;
        fim--;
    }
    
}
int main(){
    char palavra[30];
    int tam;

    printf("Insira a sua escrita: ");
    fgets(palavra,30,stdin);
    fflush(stdin);

    InverteArmazena(palavra);

    printf("%s\n",palavra);

    system("pause");
    
    return 0;
}