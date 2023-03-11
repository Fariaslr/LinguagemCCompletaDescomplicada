#include <stdio.h>
#include <locale.h>

/*
	2) Faça um programa que leia um número inteiro positivo N e imprima todos os 
	números naturais de 0 até N em ordem decrescente.
	
	Criado por: Lucas Farias														25/11/2021
*/

int main(){
	
    int i,numero;
    setlocale(LC_ALL,"");
    
    printf("Insira um número descubra todos números naturais entre ele: ");
    scanf("%d",&numero);
    
    for (i = numero; i >= 0;i--) printf("%d\t",i);

    return 0;
}
