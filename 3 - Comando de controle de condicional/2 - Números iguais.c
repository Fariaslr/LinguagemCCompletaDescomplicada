#include <stdio.h>
#include <locale.h>

/*
	2) Fa�a um programa que leia dois n�meros e mostre o maior deles. Se, por acaso, os
	dois n�meros forem iguais, imprima a mensagem "N�meros iguais!.
*/

int main(){
	
	int numeroUm, numeroDois;
	setlocale(LC_ALL,"");
	
	printf("Insira o primeiro nmero: ");
	scanf("%d",&numeroUm);
	
	printf("Insira o segundo n�mero: ");
	scanf("%d",&numeroDois);
	
	
	if(numeroUm == numeroDois)printf("\nNmeros iguais!\n"); 
	else printf("\nN�meros diferentes!\n");
    return 0;
}
