#include <stdio.h>
#include <locale.h>

/*
	4) Fa�a um programa que leia o sal�rio de um trabalhador e o valor da presta��o de
	um empr�stimo. Se a presta��o:
	
 		* For maior que 20% do sal�rio, imprima: "Empr�stimo n�o concedido."
 		* Caso contr�rio, imprima: "Empr�stimo concedido."
*/	

int main(){
	float valorSalario, valorPrestacaoEmprestimo, vintePorcentoSalario;
	setlocale(LC_ALL,"");
	
	printf("Insira o valor do sal�rio: ");
	scanf("%f",&valorSalario);	
	
	printf("Presta��o do emprestimo: ");
	scanf("%f",&valorPrestacaoEmprestimo);
	
	vintePorcentoSalario = valorSalario * 0.2;
	
	if(valorPrestacaoEmprestimo > vintePorcentoSalario) printf("Emprestimo n�o concedido!\n");
	else printf("Emprestimo concedido!\n"); 
		
	return 0;
}
