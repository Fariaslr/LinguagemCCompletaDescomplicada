#include <stdio.h>
#include <locale.h>//biblioteca de acentos

/*
	9) Fa�a um programa que leia dois valores do tipo float. Use um �nico comando de 
	leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles 
	foram lidos.  
*/

int main(){
	
    setlocale(LC_ALL,"");//Permite caracteres especiais
    float primeiroNumero,segundoNumero;

    printf("Escreva dois valores: ");
    scanf("%f %f",&primeiroNumero,&segundoNumero);

    printf("Os numeros est�o em ordem trocada %.1f e %.1f\n",segundoNumero,primeiroNumero);
    
    return 0;
}
