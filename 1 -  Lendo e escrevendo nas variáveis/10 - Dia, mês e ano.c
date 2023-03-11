#include <stdio.h>
#include <locale.h>//biblioteca de acentos

/*
	10) Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano 
	(inteiros). Em seguida, imprima os valores lidos separados por uma barra (\). 
*/

int main(){
	
    int dia,mes,ano;
    setlocale(LC_ALL,"");//Permite caracteres especiais

    printf("\nDigite o número do dia: ");
    scanf("%d",&dia);

    printf("Digite o número do mês vigente: ");
    scanf("%d",&mes);

    printf("Digite o número do ano desejado ");
    scanf("%d",&ano);

    printf("\n%d/%d/%d\n",dia,mes,ano);
    
    return 0;
}
