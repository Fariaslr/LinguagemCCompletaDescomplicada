#include <stdio.h>
#include <locale.h>

/*
	1) Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os 
	n�meros naturais de 0 at� N em ordem crescente.
	
	Criado por: Lucas Farias														25/11/2021
*/

int main(){
	
    int i,numero;
    setlocale(LC_ALL,"");
    
    printf("Descubra todos n�meros naturais entre ele: ");
    scanf("%d",&numero);
    
    for(i = 0;i <= numero;i++) printf("%d\t",i); 
    
    return 0;
}
