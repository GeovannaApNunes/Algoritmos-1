#include <stdio.h>

int main(){
	int cervejas, espetinhos, valor;
	
	printf("Digite a quantidade de cervejas desejadas: ");
	scanf("%i", &cervejas);
	
	printf("Digite a quantidade de espetinhos desejadas: ");
	scanf("%i", &espetinhos);
	
	valor = (cervejas * 7) + (espetinhos * 5);
	
	printf("O valor total a pagar pelas %i cervejas e pelos %i espetinhos e R$ %i", cervejas, espetinhos, valor);
}
