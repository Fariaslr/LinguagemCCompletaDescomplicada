#include <stdio.h>
#include <locale.h>

/*
	13) Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações básicas, por exemplo). O usuário escolhe uma 
	das opções, e o seu programa pede dois valores numéricos e realiza a operação, 
	mostrando o resultado.
*/

int main(){
    char opcao;
    float numeroA, numeroB, numeroC;

    setlocale(LC_ALL,"");

    printf("Escolha a operação que deseja (*,/,+,-): ");
    opcao = getchar();

    printf("Insira o primeiro número: ");
    scanf("%f",&numeroA);

    printf("Insira o segundo número: ");
    scanf("%f",&numeroB);

    
    switch (opcao){
    case '+':
        numeroC = numeroA + numeroB;
        printf("%.1f + %.1f = %.1f",numeroA,numeroB,numeroC);
        break;
    case '-':
        numeroC = numeroA - numeroB;
        printf("%.1f - %.1f = %.1f",numeroA,numeroB,numeroC);
        break;
    case '*':
        numeroC = numeroA * numeroB;
        printf("%.1f * %.1f = %.1f",numeroA,numeroB,numeroC);
        break;
    case '/':
        numeroC = numeroA/numeroB;
        printf("%.1f / %.1f = %.1f",numeroA,numeroB,numeroC);
        break;    
    default:
        printf("Digite somente (*,/,+,-)");
        break;
    }

    return 0;
}
