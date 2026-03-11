#include <stdio.h>

int main(){
	float salario, cheque1, cheque2, saldoFinal;
	
	printf("Digite o valor do salario depositado: ");
	scanf("%f", &salario);
	
	printf("Digite o valor do primeiro cheque depositado: ");
	scanf("%f", &cheque1);
	
	printf("Digite o valor do segundo cheque depositado: ");
	scanf("%f", &cheque2);
	
	saldoFinal = salario - (cheque1 + cheque1 * 0.02) - (cheque2 + cheque2 * 0.02);
	
	printf("O valor inicial na conta e de R$ %.2f e o valor apos a retirada dos dois cheques e R$ %.2f", salario,saldoFinal);
	
	return 0;
}
