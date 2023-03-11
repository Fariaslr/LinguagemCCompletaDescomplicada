#include <stdio.h>
#include <locale.h>
#include <time.h>

/*
	21) Escreva um programa que leia certa quantidade de n�meros, imprima o maior 
	deles e quantas vezes o maior n�mero foi lido. A quantidade de n�meros a serem 
	lidos deve ser fornecida pelo usu�rio.
*/

int main(){
	
	int numero, quantidadeNumeros, numeroMaior, contador = 0, contadorMaiorNumero = 0;
	setlocale(LC_ALL,"");
	srand(time(NULL));
	
	printf("Quantos n�meros deseja inserir: ");
	scanf("%d",&quantidadeNumeros);
	
	
	do{
		numero = rand() % 10; //Gerador de n�meros aleat�rios menores que 10
		printf("%d ",numero);
		if(contador == 0) numeroMaior = numero;
		if(numero >= numeroMaior){
			if(numero > numeroMaior){ 
				numeroMaior = numero; contadorMaiorNumero = 0;
			}
			if(numero == numeroMaior) contadorMaiorNumero++;
		}
		
		contador++;
	}while(contador < quantidadeNumeros);
	
	printf("\nO maior n�mero � %d e se repetiu %d",numeroMaior,contadorMaiorNumero);
	return 0;
}
