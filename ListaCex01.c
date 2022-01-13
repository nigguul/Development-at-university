/*Para ir à feira, uma dona de casa relacionou 10 produtos a serem comprados. Elabore um programa
que solicite o valor de cada produto e no final exiba o valor total da compra para a dona de casa.
*/

#include<stdio.h>
#include<locale.h>

int main() {
	
	int i;
	float valorTotal, valorProduto;
	
	for(i = 0; i < 10; i++){
		printf("Qual o valor do produto %i: ", i + 1);
		scanf("%f", &valorProduto);
		
		if (i == 0){
			valorTotal = valorProduto;
		} else {
			valorTotal = valorProduto + valorTotal;
		}
	}
	
	printf("O valor total foi de %.2f", valorTotal);
}
