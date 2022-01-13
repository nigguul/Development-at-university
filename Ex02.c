#include<stdio.h>
#include<locale.h>

int main () {
	float real;
	float dolar;
	
	setlocale(LC_ALL, "");
	
	printf("CONVERSOR REAL PARA DOLAR!");
	printf("\n\n");
	
	printf("Escreva o valor em reais:");
	scanf("%f", &real);
	
	dolar = real * 1.90;
	
	printf("\n");
	printf("Convertendo em dolar fica em $ %.2f", dolar);
	
	getch();
	return 0;
}
