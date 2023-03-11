#include <stdio.h>
#include <locale.h>//biblioteca de acentos

/*
	12) Elabore um programa que contenha uma constante qualquer do tipo int. Use o 
	comando const. Imprima essa constante.
*/

int main(){
	
	const int constante = 32;
	setlocale(LC_ALL,"");//Permite caracteres especiais
	
    printf("O valor da constante é: %d",constante);
    
    return 0;
}
