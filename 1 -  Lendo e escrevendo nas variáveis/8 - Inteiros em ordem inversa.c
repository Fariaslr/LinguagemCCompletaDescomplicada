#include <stdio.h>
#include <locale.h>//biblioteca de acentos

/*
	8) Fa�a um programa que leia dois n�meros inteiros e depois os imprima na ordem 
	inversa em que eles foram lidos. 	
*/

int main(){
	
	setlocale(LC_ALL,"");//Permite caracteres especiais
	int primeiroNumero, segundoNumero;
	
	printf("Insira o primeiro n�mero: ");
	scanf("%d",&primeiroNumero);
	
	printf("Insira o segundo n�mero: ");
	scanf("%d",&segundoNumero);

	printf("Mostrados na ordem inversa %d | %d\n",segundoNumero,primeiroNumero);	
	
	return 0;
}
