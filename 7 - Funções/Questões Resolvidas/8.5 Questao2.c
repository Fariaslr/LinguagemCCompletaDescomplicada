#include <stdio.h>
#include <math.h>
/*
    2) Crie uma estrutura para representar as coordenadas de um ponto no plano (posi��es X e Y). Em seguida, declare e leia do teclado um ponto e exiba a dist�ncia 
    dele at� a origem das coordenadas, isto �, a posi��o (0,0).
*/
typedef struct {
    int x;
    int y;
}Ponto;

int main(){
    int  somaQuadrados;
    int dist = 0;
    Ponto p;
    
    printf("Insira a coordenada x no ponto: ");
    scanf("%d",&p.x);

    printf("Insira a coordenada y no ponto: ");
    scanf("%d",&p.y);

    somaQuadrados = pow(p.x,2) + pow(p.y,2);
    dist = sqrt(somaQuadrados);

    printf("A dist�ncia entre os pontos %d\n",dist);
    system("pause");

    return 0;
}
