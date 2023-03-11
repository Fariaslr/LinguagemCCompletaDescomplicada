#include <stdio.h>
#include <locale.h>
#define expoente 1

/*
	16) Escreva um programa que leia um número inteiro e mostre a multiplicação e a 
	divisão desse número por dois (utilize os operadores de deslocamento de bits).
*/

int main(){

	int numero, divisor, multiplicador;
	setlocale(LC_ALL,"");
	
	printf("Digite um valor para ser multiplicado por bits: ");
	scanf("%d",&numero);
	
	divisor = numero >> expoente;
	multiplicador =numero << expoente;
	
	printf("%d >> %d = %d (Divisão, um bit à direita)\n",numero, expoente, divisor);
	printf("%d << %d = %d (Multiplicação, bit à esquerda)\n",numero, expoente,multiplicador);
 
 return 0;
}
