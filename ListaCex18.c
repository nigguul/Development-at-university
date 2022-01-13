/*18- A multiplicação de dois números é dada por sucessivas somas. Por exemplo, 5*4 é equivalente a
somarmos o número 4 cinco vezes ou a somar o número 5 quatro vezes. Escreva um programa que leia
dois números inteiros e calcula a multiplicação destes dois número através da técnica de somas
sucessivas.*/

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int n1, n2, resultado, i;
	
	printf("Digite o valor do numero 1: ");
	scanf("%d", &n1);
	
	printf("Digite o valor do numero 2: ");
	scanf("%d", &n2);
	
	while (i < n1) {
        resultado += n1;
        i += 1;
    }
	
	printf("O resultado é %i", resultado);
	
	
	return 0;
}
