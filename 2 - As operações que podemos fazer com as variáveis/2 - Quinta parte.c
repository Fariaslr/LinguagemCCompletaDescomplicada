#include <stdio.h>
#include <locale.h>//biblioteca de acento

/*
	2) Fa�a um programa que leia um n�mero real e imprima a quinta parte desse n�mero.
*/

int main(){
	
    float numero, quintaparte;
    setlocale(LC_ALL,"");//Permite caracteres especiais
   
    printf("Imprima um n�mero real: ");
    scanf("%f",&numero);
    
    quintaparte =  numero *  1/5;
    
    printf("A quinta parte de %.2f � %.2f\n",numero, quintaparte);
    
    return 0;
}
