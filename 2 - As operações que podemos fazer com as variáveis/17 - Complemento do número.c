#include <stdio.h>
#include <locale.h>

/*
	 17) Escreva um programa que leia um n�mero inteiro e mostre o seu complemento 
	bit a bit.
*/

int main(){
    setlocale(LC_ALL,"");
    int numero, complemento;
    
    printf("Digite um n�mero para e veja em seguida o seu complemento: ");
    scanf("%d",&numero);
    
    complemento = ~ numero;
    printf("O complemento de %d � %d\n",numero,complemento);
    
    return 0;
}	
