/*Criar um algoritmo que leia um número inteiro entre 1 e 12 e escrever o mês correspondente.
 Caso o usuário digite um número fora desse intervalo,
  deverá aparecer uma mensagem informando que não existe mês com este número.*/
  
#include<stdio.h>
#include<locale.h>

char *mes[] = {
	"Janeiro", 
	"Fevereiro", 
	"Março",
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
	
	printf("Digite o valor de um mês entre 1 e 12 -> ");
	scanf("%d", &valorMes);
	
	if (valorMes > 12){
		printf("Não encontramos um mes com a numeração %d", valorMes);
		return;
	}
	
	printf("O mes escolhido foi: ");
	printf(mes[valorMes - 1]);
	
	return 0;
}
