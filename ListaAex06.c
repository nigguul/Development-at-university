/*6- Uma concession�ria de ve�culos paga a seus funcion�rios um sal�rio de R$350,00 mais uma
comiss�o de R$200,00 por cada carro vendido. Elabore um programa que leia o n�mero de
carros vendidos por um determinado funcion�rio e imprima seu sal�rio total.*/

#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "");
		
	int carrosVendidos;
	float salario;	
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("  Calculador de salario\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	
	printf("Quantos carros voc� vendeu este m�s ? ");
	scanf("%i", &carrosVendidos);
	
	salario = (carrosVendidos * 200) + 350;
	
	printf("\nAnalisando os %i carros que voc� vendeu este m�s voc� vai receber $%.2f", carrosVendidos, salario);
	return 0; 
}
