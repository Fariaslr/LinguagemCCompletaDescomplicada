#include <stdio.h>
#include <locale.h>

/*
	10) Fa�a um programa que leia 10 inteiros positivos, ignorando n�o positivos, e imprima sua m�dia.
*/

int main(){
	
    int cont = 0, soma = 0;
    float media, numero;
    setlocale(LC_ALL,"");
    
    do{
    	do{
    		printf("%d� n�mero: ",cont+1);
			scanf("%f",&numero);
			
			if(numero < 0) printf("Apenas n�mero positivo!\n");
			
		}while(numero < 0);
		
		soma = soma + numero;
		cont++;
		
	}while(cont < 10);
	
	media = soma / cont;
	printf("M�dia -> %.1f",media);
	
    return 0;
}
