#include <stdio.h>
#include <locale.h>

/*
	7) Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente
	de imposto sobre o produto. Faça um programa em que o usuário entre com o valor e o estado de destino do
	produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido.
	Se o estado digitado não for válido, mostrará uma mensagem de erro.
	
		Estado      MG      SP      RJ       MS
		Imposto     7%      12%     15%      8%
*/

int main(){
	
	float valorProduto, valorFinal;
    int estado;
    setlocale(LC_ALL,"");
    
    printf("Digite o valor do produto a será vendido: R$");
    scanf("%f",&valorProduto);
    printf("Estado\t\tMG\tSP\tRJ\tMS\nImposto\t\t7%%\t12%%\t15%%\t8%%\nDestino do produto\n\tMG[1]\tSP[2]\tRJ[3]\tMS[4]\n");
    scanf("%d",&estado);

    switch (estado)
    {
    case 1:
        valorFinal = valorProduto * 1.07;
        printf("Para o estado de Minas Gerais(MG)\nO valor ficará R$%.2f com 7%% de imposto aplicado sobre o produto\n",valorFinal);
        break;
    case 2:
        valorFinal = valorProduto * 1.12;
        printf("Para o estado de São Paulo(SP)\nO valor ficará R$%.2f com 12%% de imposto aplicado sobre o produto\n",valorFinal);
        break;
    case 3:
        valorFinal = valorProduto * 1.15;
        printf("Para o estado do Rio de Janeiro(RJ)\nO valor ficará R$%.2f com 15%% de imposto aplicado sobre o produto\n",valorFinal);
        break;
    case 4:
        valorFinal = valorProduto * 1.08;
        printf("Para o estado do Mato Grosso do Sul(MS)\nO valor ficará %.2f com 8%% de imposto aplicado sobre o produto\n",valorFinal);
        break;
    default:
        printf("Erro!\n");
        break;
    }
    return 0;
}
