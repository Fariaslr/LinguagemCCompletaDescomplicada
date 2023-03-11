#include <stdio.h>
#include <locale.h>

/*
	11) Faça um algoritmo que leia um número positivo e imprima seus divisores.
	Exemplo: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.
*/

int main(){
	
    int numero, i, soma = 0;
    setlocale(LC_ALL,"");
    
    printf("Digite um número e veja os seus divisores: ");
    scanf("%d",&numero);

     for ( i = 1; i < numero; ++i) {
        if (numero % i == 0) {
            printf("%d\t",i);
            soma = soma + i;            
        }
    } 
    printf("\nA soma dos divisores = %d",soma);
	 
    return 0;
}
