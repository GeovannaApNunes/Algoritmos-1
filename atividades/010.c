#include <stdio.h>

int main(){
	float cotacao1, cotacao2, cotacao3;
	
	printf("Digite preco 1: ");
	scanf("%f", &cotacao1);
	
	printf("Digite preco 2: ");
	scanf("%f", &cotacao2);
	
	printf("Digite preco 3: ");
	scanf("%f", &cotacao3);
		
	if (cotacao1 < cotacao2 && cotacao1 < cotacao3 )
		printf("Cotacao 1");
		
	if (cotacao2 < cotacao1 && cotacao2 < cotacao3 )
		printf("Cotacao 2");
	
		
	if (cotacao3 < cotacao1 && cotacao3 < cotacao2 )
		printf("Cotacao 3");
	
	
	if (cotacao3 == cotacao1 && cotacao3 == cotacao2 )
		printf("Iguais");
	
}
