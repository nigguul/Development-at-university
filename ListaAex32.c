/* 32- A fábrica de refrigerantes Refresca Guela vende seu produto em três formatos: lata de
350 ml, garrafa de 600 ml e garrafa de 2 litros. Se um comerciante compra uma determinada
quantidade de cada formato, faça um programa para calcular quantos litros de refrigerante ele
comprou.*/

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int lata, latao, garrafa, resultado;
	
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf(" Central de vendas Refresca Guela\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	
	printf("Atualmente temos 3 produtos!\n");
	printf("Lata de 350ml  -  Garrafa de 600ml  -  Garrafa de 2 litros.\n\n");
	
	printf("Abaixo tem um menu dos nossos produtos, digite a quantidade que deseja, caso não queira digite 0\n\n");
	
	printf("Lata de 350ml        - ");
	scanf("%i", &lata);
	
	printf("Garrafa de 600ml     - ");
	scanf("%i", &latao);
	
	printf("Garrafa de 2 litros  - ");
	scanf("%i", &garrafa);
	
	resultado = (garrafa * 2000) + (lata * 350) + (latao * 600);
	
	printf("\nCompra efetuada!\n\n");
	printf("         Nota fiscal:\n");
	printf("Lata de 350ml       - Quantidade %i\n", lata);
	printf("Garrafa de 600ml    - Quantidade %i\n", latao);
	printf("Garrafa de 2 litros - Quantidade %i\n", garrafa);
	printf("\nNo total você está levando %i ml\n", resultado);
	
	getch();
	return 0;
}
