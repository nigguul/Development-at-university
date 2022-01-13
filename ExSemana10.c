#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");
		
	int i, max = 0, value;
	
	for(i = 0; i < 10; i++) {
		printf("Digite o numero %i = ", i + 1);
		scanf("%d", &value);
		
		if(value > max) max = value;
	}
	
	printf("O maior numero é %d", max);
	return 0;
}
