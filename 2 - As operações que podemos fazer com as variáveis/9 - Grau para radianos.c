#include <stdio.h>
#include <locale.h>//biblioteca de acentos
#define pi 3.141592

/*
	9) Leia um �ngulo em graus e apresente-o convertido em radianos. A f�rmula de 
	convers�o � R = G * p/180, sendo G o �ngulo em graus e R em radianos e ? = 
	3.141592.
*/

int main(){
	
    float graus,radianos;
    setlocale(LC_ALL,"");//Permite caracteres especiais
    
    printf("Insira um �ngulo em graus para ser convertido em radianos: ");
    scanf("%f",&graus);
    
    radianos = graus *pi /180;
    
    printf("%.1f� convertidos em radianos %f\n", graus, radianos);
    
    return 0;
}
