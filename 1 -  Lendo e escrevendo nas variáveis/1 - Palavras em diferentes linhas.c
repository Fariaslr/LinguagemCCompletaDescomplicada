#include <stdio.h>
#include <locale.h>//biblioteca de acentos

/*
    1) Elabore um programa que escreva as mensagens “Início do programa” e “Fim” na 
    tela, uma em cada linha, usando apenas um comando printf(). 
*/

int main(){
	
    setlocale(LC_ALL,"");//Permite caracteres especiais
    
    printf("Início do programa\nFim!\n");
    
    return 0;
}
