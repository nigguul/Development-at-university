/*18- A multiplica��o de dois n�meros � dada por sucessivas somas. Por exemplo, 5*4 � equivalente a
somarmos o n�mero 4 cinco vezes ou a somar o n�mero 5 quatro vezes. Escreva um programa que leia
dois n�meros inteiros e calcula a multiplica��o destes dois n�mero atrav�s da t�cnica de somas
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
	
	printf("O resultado � %i", resultado);
	
	
	return 0;
}
