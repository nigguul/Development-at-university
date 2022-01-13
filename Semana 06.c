/*A prefeitura de Algoritmolândia abriu uma linha de crédito para os funcionários estatutários.
 O valor máximo da prestação não poderá ultrapassar 30% do salário bruto. 
 Fazer um algoritmo que permita entrar com o salário bruto e o valor da prestação, 
 e informar se o empréstimo pode ou não ser concedido.*/
 
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float salarioBruto, valorPrestacao, salarioConsolidado;
	
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf(" Prefeitura Algoritmolândia\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	
	printf("\nDigite o valor do seu salario bruto -> ");
	scanf("%f", &salarioBruto);
	
	printf("Digite o valor da prestação que deseja -> ");
	scanf("%f", &valorPrestacao);
	
	salarioConsolidado = salarioBruto * 0.30;
	
	if (salarioConsolidado >= valorPrestacao) {
		printf("Valor concedido ao emprestimo! Você recebera informações no seu e-mail.");
	} else {
		printf("Valor negado, pois seu salario nao condiz com a prestação");
	}
	
	return 0;
}
