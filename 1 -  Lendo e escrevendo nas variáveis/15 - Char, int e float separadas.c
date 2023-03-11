#include <stdio.h>
#include <locale.h>//biblioteca

/*
	15) Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprimaas de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e 
	uma em cada linha. Use um único comando printf() para cada operação de escrita 
	das três variáveis.
*/

int main(){
	
	char caracter[2];
	int numeroInt;
	float numeroFloat;
	setlocale(LC_ALL,"");//Permite caracteres especiais

	printf("Insira um caracter: ");
	fgets(caracter,2,stdin);
	fflush(stdin);
	
	printf("Insira um número inteiro: ");
	scanf("%d",&numeroInt);
	
	printf("Insira um número flutuante: ");
	scanf("%f",&numeroFloat);
	
	printf("\t %s \n\t %d \n\t %f",caracter,numeroInt,numeroFloat);
	
	return 0;
}
