#include <stdio.h>
#include <locale.h>//biblioteca de acentos

/*
    2) Escreva um programa que leia um número inteiro e depois o imprima. 
*/

int main(){
    
	setlocale(LC_ALL,"");//Permite caracteres especiais
	int n;
     
    printf("Digite o número para ser imprimido: ");
    scanf("%i",&n);

    printf("o numero é %i\n",n);
    
  return 0;
}
