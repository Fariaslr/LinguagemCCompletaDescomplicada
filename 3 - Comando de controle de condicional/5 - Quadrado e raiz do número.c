#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
	5) Fa�a um programa que leia um n�mero e, caso ele seja positivo, calcule e mostre:
	
		* O n�mero digitado ao quadrado.
		* A raiz quadrada do n�mero digitado.
*/

int main(){
	
    float numero, raiz, potencia;
    setlocale(LC_ALL,"");
    
    printf("Digite um n�mero qualquer: ");
    scanf("%f",&numero);

    if(numero >= 0){
    	
    	printf("Quadrado do n�mero -> %.1f\n",pow(numero,2));
		printf("Raiz quadrada -> %.1f",sqrt(numero));
		
	}else printf("N�mero negativo");
    return 0;
}
