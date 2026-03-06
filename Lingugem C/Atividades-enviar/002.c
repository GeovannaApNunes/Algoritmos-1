/*
2 – Faça um programa que receba o ano de nascimento de uma pessoa e a ano atual, calcule e mostre:
	a) a idade dessa pessoa;
	b) quantos anos ela terá em 2050;

ENTRADA DE DADOS
Solicitar ano de nascimento do usuario e ano atual
 
PROCESSAMENTO
idade atualmente e em 2050

SAIDA
Voce tem xx anos e em 2050 você tera xx anos

*/

#include <stdio.h>

int main(){
	int anoNasc, anoAtual, idadeAtual, idadeFuturo;
	
	printf("Qual o ano que voce nasceu: ");
	scanf("%i", &anoNasc);
	
	printf("Em qual  ano estamos: ");
	scanf("%i", &anoAtual);
	
	idadeAtual = fabs(anoNasc - anoAtual);
	
	idadeFuturo = fabs(anoNasc - 2050);
	
	printf("Voce tem %i anos atualmente, em 2050 voce tera %i anos.", idadeAtual, idadeFuturo);
}
