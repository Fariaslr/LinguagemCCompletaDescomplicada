#include <stdio.h>
#include <locale.h>

/*
	14) Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa 
	no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma 
	dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 
	13, 21, 34.
*/

int fib(int n){        
                                  
    int i, fib1 = 1, fib2 = 1, soma;         
    for (i = 3; i <= n; i = i + 1){                                        
        soma = fib1 + fib2;                    
        fib1 = fib2;                           
        fib2 = soma;                           
    }                                        
	return fib2;                             
}
                                          
int main(){
	
    int numero;
    setlocale(LC_ALL,"");
    
    printf("Sequência de Fibonacci: ");
    scanf("%d", &n);
    printf("%d\n", fib(n));
    
    return 0;
}   


