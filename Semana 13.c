#include<stdio.h>
#include<locale.h>

int main() {
	int num1;
	int num2;
	char operador;
	
	printf("CALCULADORA\n");
	printf("=-=-=-=-=-=-=\n\n");
	
	printf("Digite o valor do primeiro numero = ");
	scanf("%d", &num1);
	
	printf("Digite o valor do segundo numero = ");
	scanf("%d", &num2);
	
	printf("Qual operacao voce quer fazer?\n");
	printf("1) ADICAO = + \n");
	printf("2) SUBTRACAO = - \n");
	printf("3) MULTIPLICACAO = * \n");
	printf("4) DIVISAO = / \n");
	printf("Escolha = ");
	scanf("%s", &operador);

	printf("RESULTADO = %d", calcular(num1, num2, operador));
	
	return 0;
}

void calcular (int n1, int n2, char operador) {
	int resultado;
	
	if (operador == '+') {
		resultado = n1 + n2;
	} else if (operador == '-'){
		resultado = n1 - n2;
	} else if (operador == '*'){
		resultado = n1 * n2;
	} else if (operador == '/') {
		resultado = n1 / n2;
	}
	
	return resultado;
}
