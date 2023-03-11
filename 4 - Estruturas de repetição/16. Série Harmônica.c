#include <stdio.h>
#include <locale.h>

/*
	16) Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica. Ou seja:
	Apresente um programa que calcule o valor de qualquer Hn
*/

int main(){
	
    int numeroPosicao,i;
    float somaHarmonica = 0;
    setlocale(LC_ALL,"");
    
    printf("Escolha a posição da série harmônica: ");
    scanf("%d",&numeroPosicao);
    for (i = 1; i <= numeroPosicao; i++){
    	somaHarmonica +=(1.0/i);
	}
                
    printf("A soma harmonica do enésimo %d é %f",numeroPosicao,somaHarmonica);
    
    return 0;
}
