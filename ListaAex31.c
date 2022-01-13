/*31- A granja Franguinho na Panela possui um controle automatizado de cada frango da sua
produção. No pé direito do frango há um anel com um chip de identificação; no pé esquerdo
são dois anéis para indicar o tipo de alimento que ele deve consumir. Sabendo que o anel com
chip custa R$ 1,20 e o anel de alimento custa R$ 0,80, faça um programa para calcular o gasto
total da granja para marcar todos os seus frangos.*/

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int frangos;
	float totalValorAneis;
	
	printf("Granja Franguinho na Panela\n\n");
	
	printf("Quantas galinhas você vai precisar marcar? -  ");
	scanf("%i", &frangos);
	
	totalValorAneis = (1.2 * frangos) + (frangos * 1.6);
	
	printf("Você vai gastar R$ %.2f em aneis.", totalValorAneis);
	
	getch();
	return 0;
}
