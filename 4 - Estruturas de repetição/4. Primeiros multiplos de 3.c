#include <stdio.h>	
#include <locale.h>

/*
	4) Fa�a um programa que determine e mostre os cinco primeiros m�ltiplos de 3 
	considerando n�meros maiores que 0.
*/

int main(){
	
	int i,cont = 0;
	setlocale(LC_ALL,"");
	
	for(i = 0;cont <= 3;i++)
		if(i % 3 ==0){
			printf("%d\t",i);
			cont++;
		}
			
    return 0;
}
