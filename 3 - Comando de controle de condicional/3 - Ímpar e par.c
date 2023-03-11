#include <stdio.h>
#include <locale.h>

/*
	3) Faça um programa que leia um número inteiro e verifique se esse número é par
	ou ímpar.
*/

int main(){
	
	int numero;
	setlocale(LC_ALL,"");
	
	printf("Insira um n?mero: ");
	scanf("%d",&numero);
	
	if(numero % 2 ==0) printf("\nO número é par!\n");
	else printf("\nO número é ímpar!\n");

	return 0;
}
