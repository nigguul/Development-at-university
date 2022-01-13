#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, " ");
	
	char vogais[15];
	int i;
	
	for (i = 0; i < 15; i++){
		printf("Digite a letra %i = ", i + 1);
		scanf("%s", &vogais[i]);
		
		if (vogais[i] == 'A' || vogais[i] == 'a'){
			vogais[i] = '?';
		} else if (vogais[i] == 'E' || vogais[i] == 'e'){
			vogais[i] = '?';
		} else if (vogais[i] == 'I' || vogais[i] == 'i'){
			vogais[i] = '?';
		} else if (vogais[i] == 'O' || vogais[i] == 'o'){
			vogais[i] = '?';
		} else if (vogais[i] == 'U' || vogais[i] == 'u'){
			vogais[i] = '?';
		}
	}
	
	printf("%s", &vogais);
	
	return 0;
}
