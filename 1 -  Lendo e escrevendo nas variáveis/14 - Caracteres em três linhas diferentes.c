#include <stdio.h>
#include <locale.h>//biblioteca

/*
    14) Fa�a um programa que leia tr�s caracteres do tipo char e depois os imprima um 
    em cada linha. Use um �nico comando printf() para isso.
*/

int main(){
	
    char a[4];
    setlocale(LC_ALL,"");//Permite caracteres especiais
    
    printf("Digite tr�s caracteres: ");
    fgets(a,4,stdin);

    printf("%c\n%c\n%c",a[0], a[1], a[2]);
    
    return 0;
}
