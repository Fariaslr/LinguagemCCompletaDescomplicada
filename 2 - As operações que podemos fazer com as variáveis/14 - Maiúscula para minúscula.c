#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	14) Fa�a um programa que converta uma letra mai�scula em letra min�scula. Use a 
	tabela ASCII para isso.
*/

int main(){
	
    char caracter[2];
    setlocale(LC_ALL,"");
    
    printf("Digite uma letra da alfabeto mai�scula: "); 
    fgets(caracter,2,stdin);
    
    strlwr(caracter);
    
    printf("Minusc�la: %s \n",caracter);    
    
    return 0;
}
