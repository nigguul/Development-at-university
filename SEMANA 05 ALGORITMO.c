/*Faca um algoritmo que leia dois valores inteiros (variáveis A e B) e apresentar 
o resultado do quadrado da diferença do primeiro valor (variável A) pelo segundo valor (variável B)*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

void main(char *argc, int argv) {
	setlocale(LC_ALL, "");
	
	int a, b, c;	
	
	printf("Digite o valor de A - ");
	scanf("%d", &a);
	
	printf("Digite o valor de B - ");
	scanf("%d", &b);
	
	c = pow(a - b, 2);
	
	printf("O valor do quadrado da diferença é %d\n", c);

}
