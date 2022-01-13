#include <stdio.h>
#include <locale.h>

#define QTD = 24

int main() {
	setlocale(LC_ALL, "");
	
	int x, escolha;
	int rotinaTripulantes[QTD][QTD][QTD][QTD], horaEscolhida;
	
	
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("          Voyager          \n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	
	printf("Vamos começar a setar a horas dos tripulantes!\n");
		
	for (x = 0; x < 3; x++) {
		printf("Horario: %d do tripulante 1 ->", x + 1);
		scanf("%d", &rotinaTripulantes[horaEscolhida][0][0][0]);
	}
	
	for (x = 0; x < 3; x++) {
		printf("Horario: %d do tripulante 2 ->", x + 1);
		scanf("%d", &rotinaTripulantes[0][horaEscolhida][0][0]);
	}
	
	for (x = 0; x < 3; x++) {
		printf("Horario: %d do tripulante 3 ->", x + 1);
		scanf("%d", &rotinaTripulantes[0][0][horaEscolhida][0]);
	}
	
	for (x = 0; x < 3; x++) {
		printf("Horario: %d do tripulante 4 ->", x + 1);
		scanf("%d", &rotinaTripulantes[0][0][0][horaEscolhida]);
	}
	
	float valorx1, valorx2, valorx3, valorx4, value, max, valor;
	
	for (x = 0; x < QTD; x++) {
		valor = rotinaTripulantes[x][0][0][0];
		printf("%d", valor);
		
		valorx1 = valorx1 + valor;
		
		if (x = QTD) {
			valorx1 = valorx1 / QTD;
			value = valorx1;
			
			if (value < max) max = 1;
		}
	}
	
	printf("Media do tripulante 1 = %f", valorx1);
		
	for (x = 0; x < QTD; x++) {
		valor = rotinaTripulantes[0][x][0][0];
		printf("%d", valor);
		
		valorx2 = valorx2 + valor;
		
		if (x = QTD) {
			valorx2 = valorx2 / QTD;
			value = valorx2;
			
			if (value < max) max = 2;
		}
	}
	
	printf("Media do tripulante 2 = %f", valorx2);
	
		for (x = 0; x < QTD; x++) {
		valor = rotinaTripulantes[0][0][x][0];
		printf("%d", valor);
		
		valorx3 = valorx3 + valor;
		
		if (x = QTD) {
			valorx3 = valorx3 / QTD;
			value = valorx3;
			
			if (value < max) max = 3;
		}
	}
	
	printf("Media do tripulante 3 = %f", valorx3);
	
	
	for (x = 0; x < QTD; x++) {
		valor = rotinaTripulantes[0][0][0][X];
		printf("%d", valor);
		
		valorx4 = valorx4 + valor;
		
		if (x = QTD) {
			valorx4 = valorx4 / QTD;
			value = valorx4;
			
			if (value < max) max = 4;
		}
	}
	
	printf("Media do tripulante 4 = %.2f", valorx4);
	
	printf("Quem teve a menor media foi o tripulante %d", max);
	
	return 0;
}


