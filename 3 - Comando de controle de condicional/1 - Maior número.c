#include <stdio.h>
#include <locale.h>

/*
	1) Fa�a um programa que leia dois n�meros e mostre qual deles � o maior.
*/

int main(){
	
	int primeiroNumero, segundoNumero;
    setlocale(LC_ALL,"");
    
    printf("Insira um n�mero: ");
	scanf("%d",&primeiroNumero);
	
	printf("Insira outro n�mero: ");
	scanf("%d",&segundoNumero);
	
	if(primeiroNumero > segundoNumero)	printf("%d � maior n�mero\n",primeiroNumero);	
	else printf("%d � o maior n�mero\n",segundoNumero);
	   
    return 0;
}
