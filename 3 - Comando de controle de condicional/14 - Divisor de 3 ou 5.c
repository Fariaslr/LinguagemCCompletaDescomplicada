#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	14) Fa�a um programa para verificar se determinado n�mero inteiro lido � divis�vel 
	por 3 ou 5, mas n�o simultaneamente pelos dois.
*/

int main(){
    int numeroA;
    setlocale(LC_ALL,"");
    
    printf("Digite um n�mero inteiro: ");
    scanf("%d",&numeroA);


    if(numeroA % 3 == 0 || numeroA % 5 == 0){
        if (numeroA % 5==0) printf("%d � divis�vel por por 5",numeroA);
        if (numeroA % 3 == 0) printf("%d � divis�vel por por 3",numeroA);
    }else printf("O n�mero %d n�o � divis�vel por 3 e nem por 5",numeroA);

    return 0;
}
