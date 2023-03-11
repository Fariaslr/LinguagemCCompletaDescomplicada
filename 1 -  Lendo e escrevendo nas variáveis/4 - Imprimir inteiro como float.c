#include <stdio.h>
#include <locale.h>//biblioteca de acentos

/*
	4) Faça um programa que leia um número inteiro e depois o imprima usando o operador ?%f?. Veja o que aconteceu.
*/

int main(){
    
    setlocale(LC_ALL,"");//Permite caracteres especiais
    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%i",&numero);

    printf("%f\n",numero);

    return 0;
}
