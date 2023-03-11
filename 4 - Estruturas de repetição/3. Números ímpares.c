#include <stdio.h>
#include <locale.h>
 
/*
	3) Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares
	
	Criado por: Lucas Farias														25/11/2021
*/
 
int main()

    int numero, contImpar,i;
    setlocale(LC_ALL,"");
    
    printf("Insira um número e veja seus ímpares: ");
    scanf("%d",&numero);
    
    for (i = 0;i <= numero;i++)
        if(i % 2 == 1) printf("%d\t",i);
        
    return 0;
}
