/*1 - Uma indústria de chaveiros tem um estoque com vários caixas de pelúcias. Escreva um programa que solicite ao usuário o número total de caixas de pelúcias, e calcule e retorne a quantidade de chaveiros, sabendo que cada chaveiro leva uma pelúcia e cada caixa tem sempre 10 pelúcias.
Entrada de dados(solicita, informa, digite)
Processamento(calcule o retorno da quantidade de chaveiros, cada chaveiro leva uma pelucia e cada caixa tem 10 pelucias)
Saida retorne a quantidade de chaveiro
*/

#include <stdio.h>

int main(){
	//variaveis
	int caixa;
	int chaveiro;
	
	//Entrada de dados
	printf("Caro usuario sentado, digite o numero de caixas, por favor, e em seguida tecle ENTER ");
	scanf("%i",&caixa);
	
	//Processamento
	chaveiro = caixa*10;
	
	//saida de dados
	printf("caixas:  %i\n", caixa);
	printf("chaveiros:  %i", chaveiro);
	return 0;
}
