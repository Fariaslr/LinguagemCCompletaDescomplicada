#include <stdio.h>
#include <locale.h>

/*
	2) Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os 
	n�meros naturais de 0 at� N em ordem decrescente.
	
	Criado por: Lucas Farias														25/11/2021
*/

int main(){
	
    int i,numero;
    setlocale(LC_ALL,"");
    
    printf("Insira um n�mero descubra todos n�meros naturais entre ele: ");
    scanf("%d",&numero);
    
    for (i = numero; i >= 0;i--) printf("%d\t",i);

    return 0;
}
