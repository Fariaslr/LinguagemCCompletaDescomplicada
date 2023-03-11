#include <stdio.h>
#include <locale.h>

/*
	10) Faça um programa que leia três números inteiros positivos e efetue o cálculo de
	uma das seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na tabela a seguir:
*/

int main(){
	
    int x,y,z;
    float mediaGeometrica, mediaPonderada, mediaHarmonica, mediaAritemtica;
    setlocale(LC_ALL,"");
    
    printf("Digite o valor de x: ");
    scanf("%d",&x);
    printf("Digite o valor de y: ");
    scanf("%d",&y);
    printf("Digite o valor de z: ");
    scanf("%d",&z);

    mediaGeometrica = x*y*z;
    mediaPonderada = (x+2*y+3*z)/6;
    mediaHarmonica = 1/((1/x)+(1/y)+(1/z));
    mediaAritemtica = (x+y+z)/3;

    printf("\nMédia geométrica: %.2f\n",mediaGeometrica);
    printf("Média ponderada: %.2f\n",mediaPonderada);
    printf("Média harmônica: %.2f\n",mediaHarmonica);
    printf("Média aritmética: %.2f\n",mediaAritemtica);
    
   return 0;
}
