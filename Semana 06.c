/*A prefeitura de Algoritmol�ndia abriu uma linha de cr�dito para os funcion�rios estatut�rios.
 O valor m�ximo da presta��o n�o poder� ultrapassar 30% do sal�rio bruto. 
 Fazer um algoritmo que permita entrar com o sal�rio bruto e o valor da presta��o, 
 e informar se o empr�stimo pode ou n�o ser concedido.*/
 
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float salarioBruto, valorPrestacao, salarioConsolidado;
	
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf(" Prefeitura Algoritmol�ndia\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	
	printf("\nDigite o valor do seu salario bruto -> ");
	scanf("%f", &salarioBruto);
	
	printf("Digite o valor da presta��o que deseja -> ");
	scanf("%f", &valorPrestacao);
	
	salarioConsolidado = salarioBruto * 0.30;
	
	if (salarioConsolidado >= valorPrestacao) {
		printf("Valor concedido ao emprestimo! Voc� recebera informa��es no seu e-mail.");
	} else {
		printf("Valor negado, pois seu salario nao condiz com a presta��o");
	}
	
	return 0;
}
