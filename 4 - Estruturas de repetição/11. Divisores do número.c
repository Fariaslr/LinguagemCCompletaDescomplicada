#include <stdio.h>
#include <locale.h>

/*
	11) Fa�a um algoritmo que leia um n�mero positivo e imprima seus divisores.
	Exemplo: os divisores do n�mero 66 s�o: 1, 2, 3, 6, 11, 22, 33 e 66.
*/

int main(){
	
    int numero, i;
    setlocale(LC_ALL,"");
    
    printf("Digite um n�mero e veja os seus divisores: ");
    scanf("%d",&numero);

     for (i = 1; i <= numero;++i) {
        if (numero % i == 0){
            printf(" %d ",i);
        }
    }    
    return 0;
}
