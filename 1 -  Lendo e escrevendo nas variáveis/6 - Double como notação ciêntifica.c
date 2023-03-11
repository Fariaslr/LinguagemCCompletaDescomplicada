#include <stdio.h>
#include <locale.h>//biblioteca de acentos

/*
	6) Faça um programa que leia um valor do tipo double e depois o imprima na forma 
	de notação científica. 
*/

int main(){
   
    setlocale(LC_ALL,"");//Permite caracteres especiais
    double numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d",&numero);

    printf("\nValor lido: %E\n",numero);
    
    return 0;
}
