#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

/*
1) Implemente um programa que leia o nome, a idade e o endere�o de uma pessoa e 
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da 
estrutura lida.
*/

typedef struct pessoa
{
    char nome[30];
    int idade;
    char endereco[50];
}p;

int main(){
    struct pessoa p;

    setlocale(LC_ALL,"portuguese");
    
    printf("Nome\n");
    gets(p.nome);

    printf("Idade\n");
    scanf("%d",&p.idade);
    fflush(stdin);

    printf("Endere�o\n");
    gets(p.endereco);

    printf("\n\t\tFicha da Pessoa\nNome: %s\nIdade: %d\nEndere�o: %s\n\n",p.nome,p.idade,p.endereco);    

    return 0;
}
