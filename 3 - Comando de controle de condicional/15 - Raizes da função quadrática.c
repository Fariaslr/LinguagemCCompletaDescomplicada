#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
	15) Faça um programa que leia os coeficientes de uma equação do segundo grau. Em 
	seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são 
	calculadas como
	em que ? = b2 ? 4 * a * c e ax2 + bx + c = 0 representa uma equação do segundo 
	grau. A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensagem ?Não é equação de segundo grau?. Do contrário, imprima:
	? Se ? < 0, não existe real. Imprima a mensagem ?Não existe raiz?.
	? Se ? = 0 existe uma raiz real. Imprima a raiz e a mensagem ?Raiz única?.
	? Se ? > 0, existem duas raízes reais. Imprima as raízes.
*/

int main(){
	
	int aDaFuncao, bDaFuncao, cDaFuncao, delta, xUm, xDois;
    setlocale(LC_ALL,"");
    
    printf("Exemplo de uma função quadrática f(x) = ax² + bx + c\n");
    printf("Insira o A: ");
    scanf("%d",&aDaFuncao);
    
    printf("Insira o B: ");
    scanf("%d",&bDaFuncao);
    
    printf("Insira o C: ");
    scanf("%d",&cDaFuncao);
    
    delta = pow(bDaFuncao,2) - 4 * aDaFuncao * cDaFuncao;//Formula Bhaskara
    
    if(delta > 0){
    	if(delta != 0){
    		xUm = (-bDaFuncao + sqrt(delta)) / 2 * aDaFuncao;
    		xDois = (-bDaFuncao - sqrt(delta)) /2 * aDaFuncao ;
    		printf("X1 = %d\t|X2 = %d",xUm,xDois);
		} else printf("Raíz única!\n");
	}else printf("Não existe raiz!\n");
}
