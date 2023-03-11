#include <stdio.h>
#include <locale.h>

/*
	20) Faça um programa que leia um valor inteiro e positivo N, calcule o mostre o valor 
	E, conforme a fórmula a seguir:
*/

int main(){
	
    int i, j, numerador = 1;
    float n = 0, numero, fatorial = 1, resultado = 0;
    setlocale(LC_ALL,"");
    
    printf("Insira um número: ");
    scanf("%f",&numero);
    
    for(i = 1;i <= numero; i++){
    	
    	for(j = 1; j <= i; j++){
    		fatorial = fatorial * j;    		
		}
		n = numerador / fatorial;
		printf("%d / %.1f = %.2f\n",numerador, fatorial, n);
		resultado += numerador / fatorial;
		fatorial = 1;
	}
	printf("A soma e valor do n é %.2f",resultado);
    return 0;
}
