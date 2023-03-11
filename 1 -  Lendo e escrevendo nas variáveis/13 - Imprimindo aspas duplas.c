#include <stdio.h>
#include <locale.h>

/*
	13) Faça um programa que leia um caractere do tipo char e depois o imprima entre 
	aspas duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”.
*/

int main(){
	
    char ch;
    setlocale(LC_ALL,"");
    
    printf("Digite um caracter: ");
    ch = getchar();

    printf("O caracter que foi inserido foi \"%c\"",ch);
    
    return 0;
}
