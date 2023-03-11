#include <stdio.h>
#include <locale.h>

/*
	17) Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do chamado
	triângulo de Floyd:
*/

int main() {
    int linhasTriangulo, i , j, cont= 0;
    setlocale(LC_ALL,"");
    
    printf("Linhas do trângulo: ");
    scanf("%d",&linhasTriangulo);

    for (i = 0; i < linhasTriangulo; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cont++;
            printf("%5d ",cont);
        }
        printf("\n");
    }
   return 0;
}
