#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int i, qtd, valorArq[10000], valor, binario[10];
	FILE *arq;
	
	arq = fopen("decimais.txt","r");
	
	while(!feof(arq)) {
		fscanf(arq, "%i\n", &valorArq[qtd]);
		qtd++;
	}
	
	
	for (i = 9; i >= 0; i--){
		binario[i - 1] = (valorArq[i] % 2) == 0 ? 0 : 1;
		valor = valorArq[i];
		valor = valor / 2; 
	}
	
	for (i = 0; i < 9; i++){
		printf("%d", binario[i]);
	}
	
	return 0;
}
