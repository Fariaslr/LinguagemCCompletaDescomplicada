#include <stdio.h>
#include <locale.h>

/*
	16) Em matem�tica, o n�mero harm�nico designado por Hn define-se como o en�simo termo da s�rie harm�nica. Ou seja:
	Apresente um programa que calcule o valor de qualquer Hn
*/

int main(){
	
    int numeroPosicao,i;
    float somaHarmonica = 0;
    setlocale(LC_ALL,"");
    
    printf("Escolha a posi��o da s�rie harm�nica: ");
    scanf("%d",&numeroPosicao);
    for (i = 1; i <= numeroPosicao; i++){
    	somaHarmonica +=(1.0/i);
	}
                
    printf("A soma harmonica do en�simo %d � %f",numeroPosicao,somaHarmonica);
    
    return 0;
}
