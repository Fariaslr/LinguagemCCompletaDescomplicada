#include <stdio.h>
#include <locale.h>//biblioteca de acentos

/*
	8) Faça um programa que leia dois números inteiros e depois os imprima na ordem 
	inversa em que eles foram lidos. 	
*/

int main(){
	
	setlocale(LC_ALL,"");//Permite caracteres especiais
	int primeiroNumero, segundoNumero;
	
	printf("Insira o primeiro número: ");
	scanf("%d",&primeiroNumero);
	
	printf("Insira o segundo número: ");
	scanf("%d",&segundoNumero);

	printf("Mostrados na ordem inversa %d | %d\n",segundoNumero,primeiroNumero);	
	
	return 0;
}
