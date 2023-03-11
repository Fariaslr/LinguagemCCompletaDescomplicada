#include <stdio.h>
#include <locale.h>

/*
	15) Elabore um programa que faça a leitura de vários números inteiros até que se digite um número negativo. O programa tem de retornar o maior e o menor número 
	lido.
*/

int main(){
	
    int numero, numeroMaior, numeroMenor, cont = 0;
    setlocale(LC_ALL,"");
    
    do{
        
		printf("Número positivo inteiro: ");
        scanf("%d",&numero);
        
        if(cont == 0){
	 		numeroMaior = numero; numeroMenor = numero;
		}else if(numero >= 0){
			if(numero >= numeroMaior) numeroMaior = numero;
			if(numero <= numeroMenor) numeroMenor = numero;
		}
        cont++;
    } while (numero>=0);

    printf("O maior número digitado foi o %d\nO menor número digitado foi %d",numeroMaior,numeroMenor);
    
   return 0;
}
