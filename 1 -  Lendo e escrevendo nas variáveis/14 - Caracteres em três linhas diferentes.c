#include <stdio.h>
#include <locale.h>//biblioteca

/*
    14) Faça um programa que leia três caracteres do tipo char e depois os imprima um 
    em cada linha. Use um único comando printf() para isso.
*/

int main(){
	
    char a[4];
    setlocale(LC_ALL,"");//Permite caracteres especiais
    
    printf("Digite três caracteres: ");
    fgets(a,4,stdin);

    printf("%c\n%c\n%c",a[0], a[1], a[2]);
    
    return 0;
}
