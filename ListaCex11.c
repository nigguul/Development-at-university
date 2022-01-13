/*11- Escreva um programa que leia 10 números informados pelo usuário e imprima o maior deles.*/

#include<stdio.h>
#include<locale.h>

int main() {
	int i, n, max, value;
	
	for (i = 0; i < 10; i++){
		printf("Qual o valor do numero %i: ", i + 1);
		scanf("%i", &n);
		
		value = n;
		
		if (value > max) max = value;
	}
	
	printf("O valor maior = %i", max);
}
