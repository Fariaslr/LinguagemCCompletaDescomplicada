#include <stdio.h>
#include <locale.h>//biblioteca de acentos

/*
    2) Escreva um programa que leia um n�mero inteiro e depois o imprima. 
*/

int main(){
    
	setlocale(LC_ALL,"");//Permite caracteres especiais
	int n;
     
    printf("Digite o n�mero para ser imprimido: ");
    scanf("%i",&n);

    printf("o numero � %i\n",n);
    
  return 0;
}
