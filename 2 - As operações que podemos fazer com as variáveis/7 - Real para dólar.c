#include <stdio.h>
#include <locale.h>//biblioteca de acentos

/*
	7) Fa�a um programa que leia um valor em reais e a cota��o do d�lar. Em seguida, 
	imprima o valor correspondente em d�lares.
*/

int main(){
	
	float real, dolar, cotacaoDolar;
	setlocale(LC_ALL,"");//Permite caracteres especiais
	
	printf("Valor em real: ");
	scanf("%f",&real);
	
	printf("Cota��o atual do d�lar: ");
	scanf("%f",&cotacaoDolar);
	
	dolar = real / cotacaoDolar;
	
	printf("R$%.2f -> US$ %.2f",real, dolar);    
	
    return 0;
}
