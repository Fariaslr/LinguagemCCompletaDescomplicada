#include <stdio.h> 
#include <locale.h>//biblioteca de acentos
#define pi 3.1415

/*
	11)Elabore um programa que contenha uma constante qualquer do tipo float. Use o 
	comando #define. Imprima essa constante.
*/

int main(){
	
    setlocale(LC_ALL,"");//Permite caracteres especiais
	
    printf("A constante é: %f",pi);

    return 0;
}
