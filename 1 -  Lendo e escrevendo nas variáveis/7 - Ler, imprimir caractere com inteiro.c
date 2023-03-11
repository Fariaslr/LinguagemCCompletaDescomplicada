#include <stdio.h>
#include <locale.h>//biblioteca de acentos

/*
	7) Elabore um programa que leia um caractere e depois o imprima como um valor 
	inteiro. 
*/

int main(){
	
    char caracter[2];
    setlocale(LC_ALL,"");//Permite caracteres especiais
    
    printf("Digite um caractere: ");
    fgets(caracter,2, stdin);

    printf("%d\n",caracter);
    
    return 0;
}
