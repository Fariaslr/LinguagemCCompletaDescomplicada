#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
	15) Fa�a um programa que leia os coeficientes de uma equa��o do segundo grau. Em 
	seguida, calcule e mostre as ra�zes dessa equa��o, lembrando que as ra�zes s�o 
	calculadas como
	em que ? = b2 ? 4 * a * c e ax2 + bx + c = 0 representa uma equa��o do segundo 
	grau. A vari�vel a tem de ser diferente de zero. Caso seja igual, imprima a mensagem ?N�o � equa��o de segundo grau?. Do contr�rio, imprima:
	? Se ? < 0, n�o existe real. Imprima a mensagem ?N�o existe raiz?.
	? Se ? = 0 existe uma raiz real. Imprima a raiz e a mensagem ?Raiz �nica?.
	? Se ? > 0, existem duas ra�zes reais. Imprima as ra�zes.
*/

int main(){
	
	int aDaFuncao, bDaFuncao, cDaFuncao, delta, xUm, xDois;
    setlocale(LC_ALL,"");
    
    printf("Exemplo de uma fun��o quadr�tica f(x) = ax� + bx + c\n");
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
		} else printf("Ra�z �nica!\n");
	}else printf("N�o existe raiz!\n");
}
