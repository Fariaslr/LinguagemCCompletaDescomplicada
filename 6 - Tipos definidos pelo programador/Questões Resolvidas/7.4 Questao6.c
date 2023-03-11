#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/*
    6) Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre 
    com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada 
    por esse caractere. Ao final, imprima a nova string e o número de vogais que ela possui.
*/
int main(){
    char palavra[100],carac[2];
    int tam, contaA = 0,contaE = 0,contaI = 0, contaO = 0, contaU = 0;

    setlocale(NULL,"portuguese");

    printf("Insira a sua escrita: ");
    fgets(palavra,100,stdin);
    fflush(stdin);

    printf("Deseja trocar todas vogais pela letra: ");
    fgets(carac,2,stdin);
    fflush(stdin);

    tam = strlen(palavra);

    for (int i = 0; i < tam; i++)
    {
        if(palavra[i] == 'a' || palavra[i] == 'A')
        {
            palavra[i] = carac[0];
            contaA ++; 
        }
        if (palavra[i] == 'e' || palavra[i] == 'E' )
        {
            palavra[i] = carac[0];
            contaE++;
        }
        if (palavra[i] == 'i' || palavra[i] == 'I'|| palavra[i] == 'í')
        {
            palavra[i] = carac[0];
            contaI++;
        }
        if (palavra[i] == 'o' || palavra[i] == 'O')
        {
            palavra[i] = carac[0];
            contaO++;
        }
        if (palavra[i] == 'u' || palavra[i] == 'U')
        {
            palavra[i] = carac[0];
            contaU++;
        }
    }

    for (int j = 0;  j < tam; j++)
    {
        printf("%c",palavra[j]);
    }

    printf("\n\n%d letras 'A'\n%d letras 'E'\n%d letras 'I'\n%d letras 'O'\n%d letras 'U'\n",contaA,contaE,contaI,contaO,contaU);
    system("pause");
    return 0;
}