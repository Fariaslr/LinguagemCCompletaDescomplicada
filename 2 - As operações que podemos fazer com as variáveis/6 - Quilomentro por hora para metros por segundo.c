#include <stdio.h>
#include <locale.h>//biblioteca de acentos
	
/*
	6) Leia uma velocidade em km/h (quil�metros por hora) e apresente convertida em 
	m/s (metros por segundo). A f�rmula de convers�o � M = K/36, sendo K a velocidade em km/h e M em m/s.
*/

int main(){
	
    float quilometrosPorHora, metrosPorSegundo;
    setlocale(LC_ALL,"");//Permite caracteres especiais
    
    printf("Insira uma velocidade em km/h: ");
    scanf("%f",&quilometrosPorHora);
    
    metrosPorSegundo = quilometrosPorHora / 3.6;
    
    printf("\t%.1f Km/h --> %.1f m/s",quilometrosPorHora,metrosPorSegundo);
    
    return 0;
}
