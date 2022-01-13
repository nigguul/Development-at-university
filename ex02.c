// 2- Faça um programa que calcula a média de temperatura de uma semana.

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	float d1,d2,d3,d4,d5,d6,d7,soma, media;
	
	printf("Vamos calcular a media de temperatura da semana, então me diga:\n\n");
	printf("\nTemperatura dia 1: ");
	scanf("%f", &d1);
	
	printf("\nTemperatura dia 2: ");
	scanf("%f", &d2);
	
	printf("\nTemperatura dia 3: ");
	scanf("%f", &d3);
	
	printf("\nTemperatura dia 4: ");
	scanf("%f", &d4);
	
	printf("\nTemperatura dia 5: ");
	scanf("%f", &d5);
	
	printf("\nTemperatura dia 6: ");
	scanf("%f", &d6);
	
	printf("\nTemperatura dia 7: ");
	scanf("%f", &d7);
	
	soma = d1 + d2 + d3 + d4 + d5 + d6 + d7;
	
	media = soma / 7;
	
	printf("A media de temperatura da semana foi de %.2fºC", media);
	
	return 0;
}
