#include <stdio.h>
#include <locale.h>

/*
	9) Escreva um programa que leia 10 números e escreva o menor valor lido e o maior 
	valor lido.
*/

int main(){
	
	int numero, menorNumero, maiorNumero, cont = 0, i;
	setlocale(LC_ALL,"");
    
    for(i = 0; cont < 10;i++){
    	printf("%dº número: ",cont+1);
    	scanf("%d",&numero);
    	
		if(cont==0){
			maiorNumero = numero;
			menorNumero = numero;
		}
		if(numero >= maiorNumero || numero <= menorNumero){
			if(numero >= maiorNumero) maiorNumero = numero;
			else menorNumero = numero;
		}
		cont++;
	}
    printf("\nMaior número -> %d\n",maiorNumero);
    printf("Menor número -> %d",menorNumero);
    
	return 0;
}
