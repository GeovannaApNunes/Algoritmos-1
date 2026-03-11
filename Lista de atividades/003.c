#include <stdio.h>

int main(){
	int anilha, pesoTotal;
	
	printf("Quantas anilhas voce utiliza no aparelho: ");
	scanf("%i", &anilha);
	
	pesoTotal = anilha * 10;
	
	printf("O total de peso e %i kg", pesoTotal);
}
