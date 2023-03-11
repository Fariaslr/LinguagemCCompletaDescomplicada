#include <stdio.h>
#include <string.h>
#include <locale.h> 
#include <ctype.h>
/*
    7) Faça um programa que leia uma string e imprima uma mensagem dizendo se ela 
    é um palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade 
    de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. 
    Exemplos: ovo, arara, rever, asa, osso etc.
*/
int main(){
    char palavra[30], copia[30];
    int i, tam, valor = 0;

    setlocale(LC_ALL,"portuguese");

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tam = strlen(palavra);
    for ( i = 0; i < tam; i++)
    {
        palavra[i] = tolower(palavra[i]);
    }

    strcpy(copia,palavra);
    strrev(copia);

    valor = strcmp(palavra, copia);

    printf("\nA palavra %s ",palavra);
    
    if(valor == 0)
    {
        printf("é palindroma \n");
    }
    else printf("não é palindroma\n");
    
    return 0;
}