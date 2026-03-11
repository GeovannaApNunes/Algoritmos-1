#include <stdio.h>

int main(){
	int pecas, valor;
	
	printf("Caro artesao quantas pecas foram produzidas: ");
	scanf("%i", &pecas);
	
	valor = pecas * 20;
	
	printf("O valor total a faturar com %i pecas e R$ %i.", pecas, valor);
	
}
