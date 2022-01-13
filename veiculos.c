#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int qtd = 0, i = 0, carrosVendidos[10000];
	float salario[10000], salarioFinal;
	char nome[10000];
	
	FILE *arq;
	
	arq = fopen("veiculos.txt","r");
	
	while(!feof(arq)) {
		fscanf(arq, "%s %f %i\n", nome[qtd], &salario[qtd], &carrosVendidos[qtd]);
		qtd++;
	}
	
	fclose(arq);

	for (i = 0; i < qtd; i++) {
		salarioFinal = (carrosVendidos[i] * 200) + salario[i];
		printf("O salario do %s com %i de carros vendidos, vai ser R$%.2f", nome[i], carrosVendidos[i], salarioFinal);	
	}

	return 0;
}
