#include <stdio.h>
#include <locale.h>

/*
	1) Faça um programa que leia um número inteiro positivo N e imprima todos os 
	números naturais de 0 até N em ordem crescente.
	
	Criado por: Lucas Farias														25/11/2021
*/

int main(){
	
    int i,numero;
    setlocale(LC_ALL,"");
    
    printf("Descubra todos números naturais entre ele: ");
    scanf("%d",&numero);
    
    for(i = 0;i <= numero;i++) printf("%d\t",i); 
    
    return 0;
}
