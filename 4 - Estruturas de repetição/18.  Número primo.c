#include <stdio.h>
#include <locale.h>

/*
	18) Fa�a um programa que receba um n�mero inteiro maior do que 1 e verifique se o 
	n�mero fornecido � primo ou n�o.
*/

int main(){
	
    int numero,cont, i;
    setlocale(LC_ALL,"");
    
    printf("Digite o n�mero: ");
    scanf("%d",&numero);
    
    for (i = 1; i <= numero; i++)
    {
        if(numero % i == 0){
            cont++;
        }
    }
    if (cont==2)
	    printf("O n�mero %d � primo",numero);
    else
    	printf("O n�mero %d n�o � primo",numero);
    
    return 0;
}
