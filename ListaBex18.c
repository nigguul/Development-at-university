#include<stdio.h>
#include<locale.h> 

int main() {
	setlocale(LC_ALL, "");

	int max;
	int i;
	
	for (i = 0; i < 3; i++){
		int value;
		printf("Digite o %i º valor -> ", i + 1);
		scanf("%d", &value);
		
		if(value > max) max = value;
	}
	
	printf("%d", max);
	
	return 0;
}
