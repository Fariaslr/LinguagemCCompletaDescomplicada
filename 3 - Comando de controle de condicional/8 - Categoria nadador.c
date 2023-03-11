#include <stdio.h>
#include <locale.h>

/*
	8) Escreva um programa que, dada a idade de um nadador, o classifique em uma das 
	seguintes categorias:
	    Categoria          Idade
	    Infantil A          5-7
	    Infantil B          8-10
	    Juvenil A           11-13
	    Juvenil B           14-17
	    Sênior        maiores de 18 anos
*/

int main(){
	
    int idade;
    setlocale(LC_ALL,"");
    
    printf("Insira a idade do nadador: ");
    scanf("%d",&idade);
    
    if  (idade>=5 && idade<=60)
	{
        printf("Categoria "); 

        if(idade>=5 && idade<=7){
            printf("Infantil A");
        }
        if(idade>=8 && idade<=10){
            printf("Infantil B");
        }
        if (idade>=11 && idade<=13){
            printf("Juvenil A");
        }
        if (idade>=14 && idade<=17){
            printf("Juvenil A");
        }
        if (idade>=18){
            printf("Senior");
        }
    }
    else printf("Idade inválida!");
    return 0;
}
