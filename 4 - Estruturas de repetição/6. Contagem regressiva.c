#include <stdio.h>
#include <locale.h>
#include <Windows.h>

/*
	6) Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 
	e terminando em 0. Mostre uma mensagem ?FIM!? após a contagem.
*/

int main(){
	
	int i;
	setlocale(LC_ALL,"");
	
    for (i = 10;i >= 0;i--){
        printf("\t00:%d",i);
        Sleep(1000);
        system("cls");
        if(i==0)printf("\t\tBOOM!\n");    
    }
    
    return 0;
}
