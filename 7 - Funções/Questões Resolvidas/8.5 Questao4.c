#include <stdio.h>
/*
    4) Crie uma estrutura chamada Ret�ngulo. Essa estrutura dever� conter o ponto 
    superior esquerdo e o ponto inferior direito do ret�ngulo. Cada ponto � definido 
    por uma estrutura Ponto, a qual cont�m as posi��es X e Y. Fa�a um programa que 
    declare e leia uma estrutura Ret�ngulo e exiba a �rea e o comprimento da diagonal 
    e o per�metro desse ret�ngulo.
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