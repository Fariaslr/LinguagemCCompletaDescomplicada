#include <stdio.h>
#include <locale.h>//biblioteca de acentos

/*
	10) Elabore um programa que solicite ao usu�rio entrar com o valor do dia, m�s e ano 
	(inteiros). Em seguida, imprima os valores lidos separados por uma barra (\). 
*/

int main(){
	
    int dia,mes,ano;
    setlocale(LC_ALL,"");//Permite caracteres especiais

    printf("\nDigite o n�mero do dia: ");
    scanf("%d",&dia);

    printf("Digite o n�mero do m�s vigente: ");
    scanf("%d",&mes);

    printf("Digite o n�mero do ano desejado ");
    scanf("%d",&ano);

    printf("\n%d/%d/%d\n",dia,mes,ano);
    
    return 0;
}
