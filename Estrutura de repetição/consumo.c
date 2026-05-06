#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	float consumo, maior;
	maior=7;
	system("color 0A");
	for(i=1; i <= 5; i++){
		printf("Digite o consumo do %ia carro: ", i);
		scanf("%f", &consumo);
		if( consumo < maior ){
			maior = consumo ;
		}
	}
	printf("Carro mais economico: %.2f\n", maior);
}
