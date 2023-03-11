#include <stdio.h>
#include <locale.h>//biblioteca de acentos

/*
	5) Faça um programa que leia um valor do tipo float e depois o imprima usando o 
	operador ?%d?. Veja o que aconteceu.
*/

int main(){
    
    setlocale(LC_ALL,"");//Permite caracteres especiais
    float numero;
    
    printf("Digite um número inteiro: ");
    scanf("%f",&numero);

    printf("\nValor lido: %d\n",numero);

    return 0;
}
