#include <stdio.h>
#include <locale.h>//biblioteca

/*
	15) Escreva um programa que leia tr�s vari�veis: char, int e float. Em seguida, imprimaas de tr�s maneiras diferentes: separadas por espa�os, por uma tabula��o horizontal e 
	uma em cada linha. Use um �nico comando printf() para cada opera��o de escrita 
	das tr�s vari�veis.
*/

int main(){
	
	char caracter[2];
	int numeroInt;
	float numeroFloat;
	setlocale(LC_ALL,"");//Permite caracteres especiais

	printf("Insira um caracter: ");
	fgets(caracter,2,stdin);
	fflush(stdin);
	
	printf("Insira um n�mero inteiro: ");
	scanf("%d",&numeroInt);
	
	printf("Insira um n�mero flutuante: ");
	scanf("%f",&numeroFloat);
	
	printf("\t %s \n\t %d \n\t %f",caracter,numeroInt,numeroFloat);
	
	return 0;
}
