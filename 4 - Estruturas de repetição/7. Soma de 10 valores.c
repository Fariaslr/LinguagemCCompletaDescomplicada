#include <stdio.h>
#include <locale.h>

/*
	7) Elabore um programa que pe�a ao usu�rio para digitar 10 valores. Some esses 
	valores e apresente o resultado na tela.
*/

int main(){
	
    int numero, cont=0, soma=0;
    setlocale(LC_ALL,"");
    
	do{
        printf("Digite o %d� n�mero: ",cont+1);
        scanf("%d",&numero);
        soma = soma + numero;
        cont++;
    }while(cont<10);
    
    printf("A soma dos %d valores � %d",cont,soma);

    return 0;
}
