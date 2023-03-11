#include <stdio.h>
#include <locale.h>
#include <time.h>

/*
	21) Escreva um programa que leia certa quantidade de números, imprima o maior 
	deles e quantas vezes o maior número foi lido. A quantidade de números a serem 
	lidos deve ser fornecida pelo usuário.
*/

int main(){
	
	int numero, quantidadeNumeros, numeroMaior, contador = 0, contadorMaiorNumero = 0;
	setlocale(LC_ALL,"");
	srand(time(NULL));
	
	printf("Quantos números deseja inserir: ");
	scanf("%d",&quantidadeNumeros);
	
	
	do{
		numero = rand() % 10; //Gerador de números aleatórios menores que 10
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
	
	printf("\nO maior número é %d e se repetiu %d",numeroMaior,contadorMaiorNumero);
	return 0;
}
