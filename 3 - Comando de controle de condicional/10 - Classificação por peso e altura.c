#include <stdio.h>
#include <locale.h>

/*
	10) Fa�a um programa que leia tr�s n�meros inteiros positivos e efetue o c�lculo de
	uma das seguintes m�dias de acordo com um valor num�rico digitado pelo usu�rio e mostrado na tabela a seguir:
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

    printf("\nM�dia geom�trica: %.2f\n",mediaGeometrica);
    printf("M�dia ponderada: %.2f\n",mediaPonderada);
    printf("M�dia harm�nica: %.2f\n",mediaHarmonica);
    printf("M�dia aritm�tica: %.2f\n",mediaAritemtica);
    
   return 0;
}
