#include <stdio.h>
#include <locale.h>

/*
	11) Fa�a um programa que informe o m�s de acordo com o n�mero digitado pelo 
	usu�rio. Exemplo: Entrada = 4. Sa�da = Abril.
*/

int main(){
	
    int mes;
    setlocale(LC_ALL,"");
    
    printf("Digite o n�mero do m�s: ");
    scanf("%d",&mes);
    
    switch (mes)
    {
    case 1:
        printf("Janeiro\n");
        break;
    case 2:
        printf("Fevereiro\n");
        break;
    case 3:
        printf("Mar�o\n");
        break;
    case 4:
        printf("Abril\n");
        break;
    case 5:
        printf("Maio\n");
        break;
    case 6:
        printf("Junho\n");
        break;
    case 7:
        printf("Julho\n");
        break;
    case 8:
        printf("Agosto\n");
        break;
    case 9:
        printf("Setembro\n");
        break;
    case 10:
        printf("Outubro\n");
        break;
    case 11:
        printf("Novembro\n");
        break;
    case 12:
        printf("Dezembro\n");
        break;
    default:
        printf("O n�mero %d n�o est� associado a nenhum m�s!\n",mes);
        break;
    }
    return 0;
}
