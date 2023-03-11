#include <stdio.h>
#include <locale.h>//biblioteca de acentos

/*
    3) Escreva um programa que leia um número inteiro e depois imprima a mensagem 
    “Valor lido:”, seguido do valor inteiro. Use apenas um comando printf().
*/

int main(){

    setlocale(LC_ALL,"");//Permite caracteres especiais
    int numero;
    
    printf("Digite um valor: ");
    scanf("%d",&numero);
    
    printf("Valor lido: %d\n",numero);
    
    return 0;
}
