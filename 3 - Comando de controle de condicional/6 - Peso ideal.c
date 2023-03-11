#include <stdio.h>
#include <locale.h>

/*
	6) Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre
	seu peso ideal, utilizando as seguintes fórmulas (em que "h" corresponde à altura):
	
		* Homens: (72,7 * h) - 58
		* Mulheres: (62,1 * h) - 44,7
*/

int main(){
	
	float altura,pesoIdeal;
	int sexo;
    setlocale(LC_ALL,"");
    
    printf("Insira a sua altura: ");
    scanf("%f",&altura);
    
    printf("Sexo:\nMasculino [1]\nFeminino [2]\n");
    scanf("%d",&sexo);
    
	if(sexo == 1){
		
		pesoIdeal = (72.7 * altura) - 58;
		printf("O peso ideal para um homem de %.2f cm é %.3f Kg",altura,pesoIdeal);
		
	}else if(sexo == 2){
		
		pesoIdeal = (62.1 * altura) - 44.7;
		printf("O peso ideal para uma mulher de %.2f cm é %.3f Kg",altura,pesoIdeal);
		
	}else printf("Número inválido!");
	
    return 0;
}
