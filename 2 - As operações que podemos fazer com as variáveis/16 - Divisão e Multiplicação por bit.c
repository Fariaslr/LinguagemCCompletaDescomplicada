#include <stdio.h>
#include <locale.h>
#define expoente 1

/*
	16) Escreva um programa que leia um n�mero inteiro e mostre a multiplica��o e a 
	divis�o desse n�mero por dois (utilize os operadores de deslocamento de bits).
*/

int main(){

	int numero, divisor, multiplicador;
	setlocale(LC_ALL,"");
	
	printf("Digite um valor para ser multiplicado por bits: ");
	scanf("%d",&numero);
	
	divisor = numero >> expoente;
	multiplicador =numero << expoente;
	
	printf("%d >> %d = %d (Divis�o, um bit � direita)\n",numero, expoente, divisor);
	printf("%d << %d = %d (Multiplica��o, bit � esquerda)\n",numero, expoente,multiplicador);
 
 return 0;
}
