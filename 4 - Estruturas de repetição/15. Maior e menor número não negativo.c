#include <stdio.h>
#include <locale.h>

/*
	15) Elabore um programa que fa�a a leitura de v�rios n�meros inteiros at� que se digite um n�mero negativo. O programa tem de retornar o maior e o menor n�mero 
	lido.
*/

int main(){
	
    int numero, numeroMaior, numeroMenor, cont = 0;
    setlocale(LC_ALL,"");
    
    do{
        
		printf("N�mero positivo inteiro: ");
        scanf("%d",&numero);
        
        if(cont == 0){
	 		numeroMaior = numero; numeroMenor = numero;
		}else if(numero >= 0){
			if(numero >= numeroMaior) numeroMaior = numero;
			if(numero <= numeroMenor) numeroMenor = numero;
		}
        cont++;
    } while (numero>=0);

    printf("O maior n�mero digitado foi o %d\nO menor n�mero digitado foi %d",numeroMaior,numeroMenor);
    
   return 0;
}
