/*41- Escreva um algoritmo que leia um peso na Terra e o n�mero de um planeta e imprima o
valor do seu peso neste planeta. A rela��o de planetas � dada a seguir juntamente com o valor
das gravidades relativas � Terra: 1) Merc�rio - 0,37; 2) V�nus - 0,88; 3) Marte - 0,38; 4) J�piter -
2,64; 5) Saturno - 1,15; 6) Urano - 1,17.*/

#include<stdio.h>
#include<locale.h>

int valorPeso[] = {
	0.37,
	0.88,
	0.38,
	2.64,
	1.15,
	1.17
};

int main() {
	setlocale(LC_ALL, "");
	
	float peso, pesoPlaneta;
	int planeta;
	
	printf("1) Merc�rio\n");
	printf("2) V�nus\n");
	printf("3) Marte\n");
	printf("4) J�piter\n");
	printf("5) Saturno\n");
	printf("6) Urano\n");
	printf("Digite qual planeta voc� est� -> ");
	scanf("%i", &planeta);
	
	printf("Digite o seu peso -> ");
	scanf("%f", &peso);
	
	switch(planeta) {
		case 1:
			pesoPlaneta = peso * 0.37;
			break;
		case 2:
			pesoPlaneta = peso * 0.88;
			break;
		case 3:
			pesoPlaneta = peso * 0.38;
			break;
		case 4:	
			pesoPlaneta = peso * 2.64;
			break;
		case 5:
			pesoPlaneta = peso * 1.15;
			break;
		case 6:
			pesoPlaneta = peso * 1.17;
			break;
	}	
	
	printf("Seu peso no planeta selecionado � de %.2fkg\n", pesoPlaneta);
	
	return 0;
}
