/*17- Ler dois valores inteiros para as vari�veis A e B, efetuar a troca dos valores de modo que a
vari�vel A passe a possuir o valor da vari�vel B, e a vari�vel B passe a possuir o valor da vari�vel
A. Apresentar os valores trocados.*/

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");
	int a, b;
	
	printf("Digite o valor de A - ");
	scanf("%i", &a);
	
	int bModificado = a;
	
	printf("Digite o valor de B - ");
	scanf("%i", &b);
	
	int aModificado = b;
	
	printf("O valor modificado fica A = %i B = %i", aModificado, bModificado);
	
	getch();
	return 0;
}
