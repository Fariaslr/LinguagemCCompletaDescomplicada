#include <stdio.h>
#include <locale.h>

/*
	19) Faça um programa que calcule e escreva o valor de S:
*/

int main(){
    
	float denominador = 1, numerador = 1, s = 0;
	
    while(numerador <= 99 && denominador <= 55){
    	
        s = (numerador)/denominador;
        printf("%.0f / %.0f\n", numerador, denominador);  
        denominador++;
        numerador = numerador + 2;
		      
    }
    
    printf("\n%f", s);
                
    return 0;
}
