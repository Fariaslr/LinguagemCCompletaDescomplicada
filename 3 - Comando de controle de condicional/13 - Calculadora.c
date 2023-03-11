#include <stdio.h>
#include <locale.h>

/*
	13) Fa�a um programa que mostre ao usu�rio um menu com quatro op��es de opera��es matem�ticas (as opera��es b�sicas, por exemplo). O usu�rio escolhe uma 
	das op��es, e o seu programa pede dois valores num�ricos e realiza a opera��o, 
	mostrando o resultado.
*/

int main(){
    char opcao;
    float numeroA, numeroB, numeroC;

    setlocale(LC_ALL,"");

    printf("Escolha a opera��o que deseja (*,/,+,-): ");
    opcao = getchar();

    printf("Insira o primeiro n�mero: ");
    scanf("%f",&numeroA);

    printf("Insira o segundo n�mero: ");
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
