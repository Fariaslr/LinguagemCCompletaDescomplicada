#include <stdio.h>
#include <locale.h>

/*
	8) Fa�a um programa que leia 10 inteiros e imprima sua m�dia.
*/

int main(){
	
    int numero, cont=0;
    float media,soma;
    setlocale(LC_ALL,"");
    
	do{
        printf("Digite o %d� n�mero: ",cont+1);
        scanf("%d",&numero);
        soma = soma + numero;
        cont++;
    }while (cont<10);
    
    media = soma / cont;
    printf("%.0f/%d = %.1f",soma,cont,media);

    return 0;
}
