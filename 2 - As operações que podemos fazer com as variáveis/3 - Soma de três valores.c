#include <stdio.h>
#include <locale.h>//biblioteca de acento

/*
	3) Fa�a um programa que leia tr�s valores inteiros e mostre sua soma.
*/

int main(){
	
    int primeiroNumero, segundoNumero, terceiroNumero; 
	int soma;
    setlocale(LC_ALL,"");//Permite caracteres especiais
    
    printf("Digite o primeiro n�mero: ");
    scanf("%d",&primeiroNumero);
    
    printf("Digite o segundo n�mero: ");
    scanf("%d",&segundoNumero);
    
    printf("Digite o terceiro n�mero: ");
    scanf("%d",&terceiroNumero);
    
    soma = primeiroNumero + segundoNumero + terceiroNumero;
    
    printf("\nA soma dos n�meros -> %d",soma);  
    
    return 0;
}
