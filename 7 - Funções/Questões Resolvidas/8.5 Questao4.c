#include <stdio.h>
/*
    4) Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto 
    superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido 
    por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa que 
    declare e leia uma estrutura Retângulo e exiba a área e o comprimento da diagonal 
    e o perímetro desse retângulo.
*/
typedef struct{
    struct superiorEsquerdo;
    struct inferiorDireito;    
}Retangulo;

typedef struct{
    int x;
    int y;
}superiorEsquerdo;

typedef struct{
    int x;
    int y;
}inferiorDireito;

int main(){
    
    return 0;
}