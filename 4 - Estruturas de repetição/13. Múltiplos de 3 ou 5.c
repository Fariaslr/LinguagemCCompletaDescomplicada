#include <stdio.h>
#include <stdlib.h>


/*
	13) Fa�a um programa que exiba a soma de todos os n�meros naturais abaixo de 
	1.000 que s�o m�ltiplos de 3 ou 5.
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
