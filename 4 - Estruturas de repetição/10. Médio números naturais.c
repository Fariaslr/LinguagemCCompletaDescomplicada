#include <stdio.h>
#include <locale.h>

/*
	10) Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.
*/

int main(){
	
    int cont = 0, soma = 0;
    float media, numero;
    setlocale(LC_ALL,"");
    
    do{
    	do{
    		printf("%dº número: ",cont+1);
			scanf("%f",&numero);
			
			if(numero < 0) printf("Apenas número positivo!\n");
			
		}while(numero < 0);
		
		soma = soma + numero;
		cont++;
		
	}while(cont < 10);
	
	media = soma / cont;
	printf("Média -> %.1f",media);
	
    return 0;
}
