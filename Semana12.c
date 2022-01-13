/*A convers�o de um n�mero decimal para bin�rio 
pode ser realizada atrav�s do m�todo de Divis�o Repetida. 
Neste m�todo fazemos a divis�o do n�mero decimal por 2 at� que n�o seja mais poss�vel realizar a divis�o. 
O resultado � obtido juntando o resultado da �ltima divis�o e o resto das divis�es anteriores, que devem ser sempre 0 ou 1.
Exemplo 1: Para a entrada "46", a sa�da deve ser "101110".
Exemplo 2: Para a entrada "8", a sa�da deve ser "1000".
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



