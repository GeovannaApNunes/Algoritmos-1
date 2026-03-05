//4 - Um empresa contrata um encanador a R$ 20,00 por dia. Crie um programa que solicite o número de dias trabalhados e retorne o valor do salário a ser pago.
//Variavel

//Entrada de dados
//solicite o numero de dias trabalhados

//processamento
//a 20 reais o dia, calcular o salario

//saida de dados
//retorne o valor do salario a ser pago


#include <stdio.h>

int main (){
	int dias;
	float salario;
	
	printf("Digite o numero de dias trabalhados: ");
	scanf("%i",&dias);
	
	salario = 20 * dias;
	
	printf("Valor a pagar de salario: %.2f por %i dias trabalhados.", salario, dias);
}
