#include <stdio.h>
#include <locale.h>

/*
	9) Fa�a um programa que leia a altura e o peso de uma pessoa. De acordo com a 
	tabela a seguir, verifique e mostre qual a classifica��o dessa pessoa.
*/

int main(){
	float peso, altura;
	setlocale(LC_ALL,"");
    
    printf("Peso: ");
    scanf("%f",&peso);
    
    printf("Altura: ");
    scanf("%f",&altura);
    
    if(peso <= 60){
    	
    	printf("Classifica��o ");
    	if(altura <= 1.20) printf("A");
		if(altura > 1.20 && altura <= 1.70) printf("B");
		if(altura > 1.70) printf("C");	
			
	}else if(peso > 60 && peso <= 90){
		
		printf("Classifica��o ");
		if(altura <= 1.20) printf("D");
		if(altura > 1.20 && altura <= 1.70) printf("E");
		if(altura > 1.70) printf("F");
		
	}else{
		
		printf("Classifica��o ");
		if(altura <= 1.20) printf("G");
		if(altura > 1.20 && altura <= 1.70) printf("H");
		if(altura > 1.70) printf("I");
		
	}
    
   return 0;
}
