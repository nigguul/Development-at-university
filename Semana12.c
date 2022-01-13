/*A conversão de um número decimal para binário 
pode ser realizada através do método de Divisão Repetida. 
Neste método fazemos a divisão do número decimal por 2 até que não seja mais possível realizar a divisão. 
O resultado é obtido juntando o resultado da última divisão e o resto das divisões anteriores, que devem ser sempre 0 ou 1.
Exemplo 1: Para a entrada "46", a saída deve ser "101110".
Exemplo 2: Para a entrada "8", a saída deve ser "1000".
Compatibilidade com o leitor de tela ativada.*/

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int i, valor, binario[10];
	
	printf("Digite um valor para ser convertido em binario = ");
	scanf("%d", &valor);
	
	
	for (i = 9; i >= 0; i--){
		binario[i - 1] = (valor % 2) == 0 ? 0 : 1;
		valor = valor / 2; 
	}
	
	for (i = 0; i < 9; i++){
		printf("%d", binario[i]);
	}
	
	return 0;
}



