#include <stdio.h>
#include <locale.h>

/*
	1) Faça um programa que leia dois números e mostre qual deles é o maior.
*/

int main(){
	
	int primeiroNumero, segundoNumero;
    setlocale(LC_ALL,"");
    
    printf("Insira um número: ");
	scanf("%d",&primeiroNumero);
	
	printf("Insira outro número: ");
	scanf("%d",&segundoNumero);
	
	if(primeiroNumero > segundoNumero)	printf("%d é maior número\n",primeiroNumero);	
	else printf("%d é o maior número\n",segundoNumero);
	   
    return 0;
}
