/*16- Fa�a um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e
escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e m�s
com 30 dias.*/

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int ano, mes, dia, totalDias;
	
	printf("Me diga uma coisa sobre voc�!\n\n");
	
	printf("\nQuantos anos voc� tem? - ");
	scanf("%i", &ano);
	
	printf("Qual dia voc� nasceu? - ");
	scanf("%i", &dia);
	
	printf("E de qual mes voc� nasceu? - ");
	scanf("%i", &mes);
	
	totalDias = dia + (mes * 30) + (ano * 365);
	
	printf("Parabens! Voc� tem %i dias vividos!", totalDias);
	
	getch();
	return 0;
}
