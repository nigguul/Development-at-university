/*31- A granja Franguinho na Panela possui um controle automatizado de cada frango da sua
produ��o. No p� direito do frango h� um anel com um chip de identifica��o; no p� esquerdo
s�o dois an�is para indicar o tipo de alimento que ele deve consumir. Sabendo que o anel com
chip custa R$ 1,20 e o anel de alimento custa R$ 0,80, fa�a um programa para calcular o gasto
total da granja para marcar todos os seus frangos.*/

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int frangos;
	float totalValorAneis;
	
	printf("Granja Franguinho na Panela\n\n");
	
	printf("Quantas galinhas voc� vai precisar marcar? -  ");
	scanf("%i", &frangos);
	
	totalValorAneis = (1.2 * frangos) + (frangos * 1.6);
	
	printf("Voc� vai gastar R$ %.2f em aneis.", totalValorAneis);
	
	getch();
	return 0;
}
