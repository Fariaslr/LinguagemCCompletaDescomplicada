#include <stdio.h>
#include <locale.h>

/*
	18) Elabore um programa que leia dois n�meros inteiros e exiba o deslocamento, � 
	esquerda e � direita, do primeiro n�mero pelo segundo.
*/

int main(){
	
    int numeroUm, numeroDois, direita, esquerda;
    setlocale(LC_ALL,"");
    
    printf("Insira um n�mero: ");
    scanf("%d",&numeroUm);
    printf("Quantos bit deseja mover: ");
    scanf("%d",&numeroDois);
    
    esquerda = numeroUm << numeroDois;
    direita = numeroUm >> numeroDois;
    
	printf("\n%d << %d = %d\n",numeroUm,numeroDois,esquerda);
	printf("%d >> %d = %d",numeroUm,numeroDois,direita);
	

    return 0;
}
