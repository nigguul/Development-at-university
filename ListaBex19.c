/*19- Dados 3 valores reais representando os lados de um possível triângulo, verifique se
os mesmos formam um triângulo (a medida de qualquer um de seus lados deve ser menor
que a soma das medidas dos lados restantes). Caso seja formado um triângulo, descubra
também se este triângulo é escaleno (três lados diferentes), isósceles (dois lados iguais) ou
equilátero (três lados iguais). Onde: A é o maior lado do triângulo e B e C são os outros dois
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
		printf("Triângulo pode ser formado\n");
		
		if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
			printf("Triângulo idenfiticado como escaleno!");
		} else if (lado1 == lado2 && lado3 == lado2) {
			printf("Triângulo idenfiticado como equilátero!");
		} else {
			printf("Triângulo idenfiticado como isósceles!");
		}
		
	} else {
		printf("Triângulo não pode ser formado\n");
	}
	
	
	return 0;
}
