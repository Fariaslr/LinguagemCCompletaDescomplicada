#include <stdio.h>
#include <locale.h>//biblioteca de acentos
#include <math.h>//necessita para usar math.h
#define pi 3.141592

/*
	11) Leia o valor do raio de um c�rculo. Calcule e imprima a �rea do c�rculo correspondente.
	A �rea do c�rculo � A = pi * raio2, sendo pi = 3.141592.
*/

int main(){
    float raioDoCirculo,areaDoCirculo;
    setlocale(LC_ALL,"");//Permite caracteres especiais
    
    printf("Insira o valor do raio do c�rculo: ");
    scanf("%f",&raioDoCirculo);
    
    areaDoCirculo = pi * pow(raioDoCirculo,2);
    
    printf("A �rea do circulo � de %.2f\n",areaDoCirculo);
    
    return 0;
}
