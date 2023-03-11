#include <stdio.h>
#include <math.h>
/*
    3) Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles.
*/
typedef struct{
    int x;
    int y;
}pontoPrimeiro;

typedef struct{
    int x;
    int y;
}pontoSegundo;


int main(){
    
    float distPontos;
    pontoPrimeiro p1;
    pontoSegundo p2;

    printf("X do primeiro ponto: ");
    scanf("%d",&p1.x);

    printf("Y do primeiro ponto: ");
    scanf("%d",&p1.y);

    printf("X do segundo ponto: ");
    scanf("%d",&p2.x);

    printf("Y do segundo ponto: ");
    scanf("%d",&p2.y);

    distPontos = sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2));

    printf("A distancia entre os pontos %f ",distPontos);
    return 0;
}