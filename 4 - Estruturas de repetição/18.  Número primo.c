#include <stdio.h>
#include <locale.h>

/*
	18) Faça um programa que receba um número inteiro maior do que 1 e verifique se o 
	número fornecido é primo ou não.
*/

int main(){
	
    int numero,cont, i;
    setlocale(LC_ALL,"");
    
    printf("Digite o número: ");
    scanf("%d",&numero);
    
    for (i = 1; i <= numero; i++)
    {
        if(numero % i == 0){
            cont++;
        }
    }
    if (cont==2)
	    printf("O número %d é primo",numero);
    else
    	printf("O número %d não é primo",numero);
    
    return 0;
}
