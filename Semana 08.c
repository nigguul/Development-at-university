#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int produtoSelecionado;
	float valorProduto;
	
	printf("=-=-=-=-=-=-=-=-=\n");
	printf("     MERCADO \n");
	printf("=-=-=-=-=-=-=-=-=\n\n");

	printf("Qual o valor do produto que você comprou -> ");
	scanf("%f", &valorProduto);
	valorProduto = valorProduto * 1.40;
	
	printf("\nO valor do produto fica em R$%.2f\n\n", valorProduto);
	
	
	printf("      MENU      \n");
	printf("1 - Perecivel\n");
	printf("2 - Não Perecivel\n\n");
	printf("Conforme o numero escolha o tipo de produto que você comprou: ");
	scanf("%d", &produtoSelecionado);
	
	if (produtoSelecionado != 1 && produtoSelecionado != 2) {
		printf("Valor incorreto!");
		getchar();
		return;
	}
	
	if (produtoSelecionado == 1) {
		
		if (valorProduto > 20.00) {
			printf("Produto se encaixa na promoção 1, sendo assim o valor de compra fica em R$%.2f\n", valorProduto - (valorProduto * 0.20));
		} else if (valorProduto >= 10.00 && valorProduto <= 20.00) {
			printf("Produto se encaixa na promoção 2, sendo assim o valor de compra fica em R$%.2f\n", valorProduto - (valorProduto * 0.10));
		} else {
			printf("Produto se encaixa na promoção 3, sendo assim o valor de compra fica em R$%.2f\n", valorProduto - (valorProduto * 0.15));
		}
		
	} else if (produtoSelecionado == 2){
		if (valorProduto >= 50.00) {
			printf("Produto se encaixa na promoção 4, sendo assim o valor de compra fica em R$%.2f\n", valorProduto - (valorProduto * 0.05));
		} else {
			printf("O produto não se encaixa em nenhuma promoção, ou seja, promoção 0\n");
		}
	}
	
	return 0; 
}
