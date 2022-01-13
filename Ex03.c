#include<stdio.h>
#include<locale.h>

int main () {
	float dolar;
	float real;
	
	setlocale(LC_ALL, "");
	
	printf("CONVERSOR DOLAR PARA REAL!");
	printf("\n\n");
	
	printf("Escreva o valor em dolar:");
	scanf("%f", &dolar);
	
	real = dolar / 1.90;
	
	printf("\n");
	printf("Convertendo em real fica em R$ %.2f", real);
	
	getch();
	return 0;
}
