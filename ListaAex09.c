/*9- Em um curso de programação de computadores, a nota final de um estudante é dada a
partir de seu desempenho em três aspectos. Existe uma prova teórica que vale 30% da nota
final. Uma segunda prova teórica que equivale a 20%. E, uma última prova, que equivale a
50% da nota. Elabore um programa que leia a nota das três avaliações e imprima a nota final
do estudante.
*/

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	float n1, n2, n3, notaFinal;
	
	printf("Diga qual a nota da primeira prova - ");
	scanf("%f", &n1);
	
	printf("Diga qual a nota da segunda prova - ");
	scanf("%f", &n2);
	
	printf("Diga qual a nota da ultima prova - ");
	scanf("%f", &n3);
	
	notaFinal = (n1 * 0.30) + (n2 * 0.20) + (n3 * 0.50);
	
	if (notaFinal < 7){
		printf("\nReprovado! Sua nota final foi %.1f", notaFinal);
	} else {
		printf("\nAprovado! Sua nota final foi %.1f", notaFinal);
	}
	
	getch();
	return 0;
}
