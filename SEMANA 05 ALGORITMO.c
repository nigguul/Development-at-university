/*Faca um algoritmo que leia dois valores inteiros (vari�veis A e B) e apresentar 
o resultado do quadrado da diferen�a do primeiro valor (vari�vel A) pelo segundo valor (vari�vel B)*/

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
	
	printf("O valor do quadrado da diferen�a � %d\n", c);

}
