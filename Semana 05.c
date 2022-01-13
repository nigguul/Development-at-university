/*A padaria Docinho de Coco vende uma certa quantidade de p�es franceses e uma quantidade de broas a cada dia. 
Cada p�ozinho custa R$ 0,12 e a broa custa R$ 1,50. 
Ao final do dia, o dono quer saber quanto arrecadou com a venda dos p�es e broas (juntos), 
e quanto deve guardar numa conta poupan�a (10% do total arrecadado).
Voc� foi contratado para fazer os c�lculos para o dono. 
Com base nestes fatos, fa�a um programa para ler as quantidades de p�es e de broas, 
e depois calcular os dados solicitados.*/
 
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int qtdPaes, qtdBroas;
	float valorTotal, poupanca;
	
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf(" PADARIA DOCINHO DE COCO\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	
	printf("\nDigite a quantidade de p�es comprados -> ");
	scanf("%i", &qtdPaes);
	
	printf("Digite a quantidade de broas comprados -> ");
	scanf("%i", &qtdBroas);
	
	valorTotal = (qtdPaes * 0.12) + (qtdBroas * 1.50);
	poupanca = valorTotal * 0.10;
	
	printf("\nCom %d p�es e %d broas compradas o valor total arrecadado � R$%.2f\n", qtdPaes, qtdBroas, valorTotal);
	
	printf("Com isso o dono deve guardar R$%.2f na poupan�a", poupanca);
	
	return 0;
}
