/*16- Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e
escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês
com 30 dias.*/

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int ano, mes, dia, totalDias;
	
	printf("Me diga uma coisa sobre você!\n\n");
	
	printf("\nQuantos anos você tem? - ");
	scanf("%i", &ano);
	
	printf("Qual dia você nasceu? - ");
	scanf("%i", &dia);
	
	printf("E de qual mes você nasceu? - ");
	scanf("%i", &mes);
	
	totalDias = dia + (mes * 30) + (ano * 365);
	
	printf("Parabens! Você tem %i dias vividos!", totalDias);
	
	getch();
	return 0;
}
