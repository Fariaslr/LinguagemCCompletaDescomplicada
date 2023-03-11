#include <stdio.h>
#include <locale.h>

/*
	12) Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 
	e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1, 
	segunda-feira, se 2, e assim por diante.
*/

int main(){
	
    int dia;
    setlocale(LC_ALL,"");
    
    printf("Insira um número relacionado ao dia: ");
    scanf("%d",&dia);

    switch (dia)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda-Feira");
        break;
    case 3:
        printf("Terça-Feira");
        break;
    case 4:
        printf("Quarta-Feira");
        break;
    case 5:
        printf("Quinta-Feira");
        break;
    case 6:
        printf("Sexta-Feira");
        break;
    case 7:
        printf("Sábado");
        break;
    default:
        printf("O número %d não está associado a nenhum dia!\n",dia);
        break;
    }
    return 0;
}
