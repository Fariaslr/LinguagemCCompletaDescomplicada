#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
	5) Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
	
		* O número digitado ao quadrado.
		* A raiz quadrada do número digitado.
*/

int main(){
	
    float numero, raiz, potencia;
    setlocale(LC_ALL,"");
    
    printf("Digite um número qualquer: ");
    scanf("%f",&numero);

    if(numero >= 0){
    	
    	printf("Quadrado do número -> %.1f\n",pow(numero,2));
		printf("Raiz quadrada -> %.1f",sqrt(numero));
		
	}else printf("Número negativo");
    return 0;
}
