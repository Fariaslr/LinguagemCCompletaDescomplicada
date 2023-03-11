#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	14) Faça um programa para verificar se determinado número inteiro lido é divisível 
	por 3 ou 5, mas não simultaneamente pelos dois.
*/

int main(){
    int numeroA;
    setlocale(LC_ALL,"");
    
    printf("Digite um número inteiro: ");
    scanf("%d",&numeroA);


    if(numeroA % 3 == 0 || numeroA % 5 == 0){
        if (numeroA % 5==0) printf("%d é divisível por por 5",numeroA);
        if (numeroA % 3 == 0) printf("%d é divisível por por 3",numeroA);
    }else printf("O número %d não é divisível por 3 e nem por 5",numeroA);

    return 0;
}
