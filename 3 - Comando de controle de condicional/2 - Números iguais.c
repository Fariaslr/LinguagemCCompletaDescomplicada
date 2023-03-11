#include <stdio.h>
#include <locale.h>

/*
	2) Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os
	dois números forem iguais, imprima a mensagem "Números iguais!.
*/

int main(){
	
	int numeroUm, numeroDois;
	setlocale(LC_ALL,"");
	
	printf("Insira o primeiro nmero: ");
	scanf("%d",&numeroUm);
	
	printf("Insira o segundo número: ");
	scanf("%d",&numeroDois);
	
	
	if(numeroUm == numeroDois)printf("\nNmeros iguais!\n"); 
	else printf("\nNúmeros diferentes!\n");
    return 0;
}
