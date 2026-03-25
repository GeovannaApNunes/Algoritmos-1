#include <stdio.h>

int main(){
	float litros;
	
	printf("Digite a quantidade de litros abastecidos:  ");
	scanf("%f", &litros);

	if(litros < 10){
		printf("Voce ganhou um chaveiro\n");
	}	
	
	else if( litros > 10 && litros < 20){
		printf("Voce ganhou uma Ducha");
	}	
	else if(litros >= 20){
		printf("Voce ganhou uma troca de oleo");
	}
	else
		printf("Invalido");
	
}
