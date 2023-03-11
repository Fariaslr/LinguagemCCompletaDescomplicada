#include <stdio.h>
#include <stdlib.h>


/*
	13) Faça um programa que exiba a soma de todos os números naturais abaixo de 
	1.000 que são múltiplos de 3 ou 5.
*/

int main(){
	
    int i, limite = 1000;
    
    for (i = 0;i <= limite;i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            printf("%d\t",i);
        }
    }
    
    return 0;
}
