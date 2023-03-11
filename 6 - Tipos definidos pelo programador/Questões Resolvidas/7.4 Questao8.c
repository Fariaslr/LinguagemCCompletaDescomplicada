#include <stdio.h>
#include <string.h>
#include <locale.h> 
#include <ctype.h>
/*
    8) Construa um programa que leia duas strings do teclado. Imprima uma mensagem 
    informando se a segunda string lida está contida dentro da primeira.
*/
int main(){
    setlocale(LC_ALL,"portuguese");

    char carac1[30];
    char carac2[30];
    char *p;
    int i , j,cont = 0;

    printf("Digite uma palavra: ");
    fgets(carac1,30,stdin);
    fflush(stdin);

    printf("Digite outra palavra: ");
    fgets(carac2,30,stdin);
    fflush(stdin);

    for ( i = 0; i < strlen(carac1); i++)
    {
        for ( j = 0; j < strlen(carac2); j++)
        {
            carac2[j] = tolower(carac2[j]);
        }
        carac1[i] = tolower(carac1[i]);
    }
    
    p = strstr(carac1,carac2);

    if (p)
    {
        printf("Palavra encontrada!\n");
    }
    else printf("Palavra não encontrada!\n");
    system("pause");
    return 0;
}