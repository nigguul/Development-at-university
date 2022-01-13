/*6- Uma concessionária de veículos paga a seus funcionários um salário de R$350,00 mais uma
comissão de R$200,00 por cada carro vendido. Elabore um programa que leia o número de
carros vendidos por um determinado funcionário e imprima seu salário total.*/

#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "");
		
	int carrosVendidos;
	float salario;	
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("  Calculador de salario\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	
	printf("Quantos carros você vendeu este mês ? ");
	scanf("%i", &carrosVendidos);
	
	salario = (carrosVendidos * 200) + 350;
	
	printf("\nAnalisando os %i carros que você vendeu este mês você vai receber $%.2f", carrosVendidos, salario);
	return 0; 
}
