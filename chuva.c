#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int qtd = 0, i = 0;
	int dados[10000];
	float temp;
	
	FILE *arq;
	
	arq = fopen("chuva.txt","r");
	
	while(!feof(arq))
	{
		fscanf(arq, "%d\n", &dados[qtd]);
		qtd++;
	}
	
	fclose(arq);
	
	for (i = 0; i < qtd; i++) {
		temp = dados[i] / 25.4;
		
		printf("%.2f\n", temp);	
	}

	
	return 0;
}
