#include <stdio.h>
#include <locale.h>//biblioteca de acentos

/*
	1) Fa�a um programa que leia um n�mero inteiro e retorne seu antecessor e seu sucessor
*/

int main(){
	
    int numero, antecessor, sucessor;
    setlocale(LC_ALL,"");//Permite caracteres especiais
    
    printf("Adicione um n�mero: ");
    scanf("%d",&numero);
    
    antecessor = numero - 1;
    sucessor = numero + 1;
    
    printf("\nN�mero = %d\nAntecessor -> %d\nSucessor -> %d",numero, antecessor, sucessor);

    return 0;

}
