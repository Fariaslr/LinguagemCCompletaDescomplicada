#include <stdio.h>
#include <locale.h>

/*
	4) Faça um programa que leia o salário de um trabalhador e o valor da prestação de
	um empréstimo. Se a prestação:
	
 		* For maior que 20% do salário, imprima: "Empréstimo não concedido."
 		* Caso contrário, imprima: "Empréstimo concedido."
*/	

int main(){
	float valorSalario, valorPrestacaoEmprestimo, vintePorcentoSalario;
	setlocale(LC_ALL,"");
	
	printf("Insira o valor do salário: ");
	scanf("%f",&valorSalario);	
	
	printf("Prestação do emprestimo: ");
	scanf("%f",&valorPrestacaoEmprestimo);
	
	vintePorcentoSalario = valorSalario * 0.2;
	
	if(valorPrestacaoEmprestimo > vintePorcentoSalario) printf("Emprestimo não concedido!\n");
	else printf("Emprestimo concedido!\n"); 
		
	return 0;
}
