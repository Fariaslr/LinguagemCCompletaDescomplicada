#include <stdio.h>
#include <locale.h>

/*
	19) Elabore um programa que leia dois n�meros inteiros e exiba o resultado das opera��es 
	de ?ou exclusivo?, ?ou bit a bit? e ?e bit a bit? entre eles.
*/

int main(){
	
    int numeroUm, numeroDois, ouExclusivo, ou, e;
    setlocale(LC_ALL,"");
    
    printf("Insira o primeiro n�mero: ");
    scanf("%d",&numeroUm);
    printf("Insira o segundo n�mero: ");
    scanf("%d",&numeroDois);
    
    ouExclusivo = numeroUm ^ numeroDois;
    ou = numeroUm | numeroDois;
    e = numeroUm & numeroDois;

    printf("\nUso do ou exclusivo: %d\nUso do ou: %d\nUso do e: %d\n",ouExclusivo,ou,e);
    
    return 0;
}
