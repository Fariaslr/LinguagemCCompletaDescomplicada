#include <stdio.h>
#include <locale.h>
 
/*
	3) Fa�a um programa que leia um n�mero inteiro N e depois imprima os N primeiros n�meros naturais �mpares
	
	Criado por: Lucas Farias														25/11/2021
*/
 
int main()

    int numero, contImpar,i;
    setlocale(LC_ALL,"");
    
    printf("Insira um n�mero e veja seus �mpares: ");
    scanf("%d",&numero);
    
    for (i = 0;i <= numero;i++)
        if(i % 2 == 1) printf("%d\t",i);
        
    return 0;
}
