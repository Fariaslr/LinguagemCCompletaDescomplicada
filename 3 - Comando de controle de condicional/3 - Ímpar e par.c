#include <stdio.h>
#include <locale.h>

/*
	3) Fa�a um programa que leia um n�mero inteiro e verifique se esse n�mero � par
	ou �mpar.
*/

int main(){
	
	int numero;
	setlocale(LC_ALL,"");
	
	printf("Insira um n?mero: ");
	scanf("%d",&numero);
	
	if(numero % 2 ==0) printf("\nO n�mero � par!\n");
	else printf("\nO n�mero � �mpar!\n");

	return 0;
}
