/*19- Dados 3 valores reais representando os lados de um poss�vel tri�ngulo, verifique se
os mesmos formam um tri�ngulo (a medida de qualquer um de seus lados deve ser menor
que a soma das medidas dos lados restantes). Caso seja formado um tri�ngulo, descubra
tamb�m se este tri�ngulo � escaleno (tr�s lados diferentes), is�sceles (dois lados iguais) ou
equil�tero (tr�s lados iguais). Onde: A � o maior lado do tri�ngulo e B e C s�o os outros dois
lados.*/

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	float lado1, lado2, lado3;

	printf("Digite o valor do lado 1 -> ");
	scanf("%f", &lado1);
	
	printf("Digite o valor do lado 2 -> ");
	scanf("%f", &lado2);
	
	printf("Digite o valor do lado 3 -> ");
	scanf("%f", &lado3);
	
	if (lado3 < lado1 + lado2 && lado2 < lado1 + lado3 && lado1 < lado3 + lado2){
		printf("Tri�ngulo pode ser formado\n");
		
		if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
			printf("Tri�ngulo idenfiticado como escaleno!");
		} else if (lado1 == lado2 && lado3 == lado2) {
			printf("Tri�ngulo idenfiticado como equil�tero!");
		} else {
			printf("Tri�ngulo idenfiticado como is�sceles!");
		}
		
	} else {
		printf("Tri�ngulo n�o pode ser formado\n");
	}
	
	
	return 0;
}
