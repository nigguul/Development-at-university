#include<stdio.h>
#include<locale.h>

int main (){
		
	setlocale(LC_ALL, "");
	
	float salario;
	float saldo;
	
	printf("CALCULO DE SALÁRIO!");
	printf("\n\n");
	
	printf("Digite o seu salário:");
	scanf("%f", &salario);
	
	printf("Calculando seu salario...  15%%");
	printf("\n\n");
	
	saldo = (salario * 0.15) + salario;
	
	printf("Seu salário com o aumento fica no valor de R$ %.2f", saldo);
	
	getch();
	return 0;
}
