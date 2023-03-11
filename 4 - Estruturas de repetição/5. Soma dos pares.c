#include <stdio.h>
#include <locale.h>

/*
	5) Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
	
	Criado por: Lucas Farias														25/11/2021
*/

int main(){
	
	int i, soma = 0, cont = 0;
	setlocale(LC_ALL,"") ;
	
	for(i = 0;cont <= 50;i++){
		if(i % 2 == 0){
			printf("+ %d \n",i);
			soma = soma + i;
			cont++;
		}
	}
	printf("Soma ->  %d",soma);
	
   return 0;
}
