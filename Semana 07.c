/*Criar um algoritmo que leia um n�mero inteiro entre 1 e 12 e escrever o m�s correspondente.
 Caso o usu�rio digite um n�mero fora desse intervalo,
  dever� aparecer uma mensagem informando que n�o existe m�s com este n�mero.*/
  
#include<stdio.h>
#include<locale.h>

char *mes[] = {
	"Janeiro", 
	"Fevereiro", 
	"Mar�o",
	"Abril",
	"Maio",
	"Junho",
	"Julho",
	"Agosto",
	"Setembro",
	"Outubro",
	"Novembro",
	"Dezembro"
};

int main(){
	setlocale(LC_ALL, "");

	int valorMes;
	
	printf("Digite o valor de um m�s entre 1 e 12 -> ");
	scanf("%d", &valorMes);
	
	if (valorMes > 12){
		printf("N�o encontramos um mes com a numera��o %d", valorMes);
		return;
	}
	
	printf("O mes escolhido foi: ");
	printf(mes[valorMes - 1]);
	
	return 0;
}
