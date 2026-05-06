#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	float peso, menosp;
	menosp=999;
	system("color 0A");
	for(i=1; i <= 5; i++){
		printf("Digite o peso do %ia lutador: ", i);
		scanf("%f", &peso);
		if( peso < menosp ){
			menosp = peso ;
		}
	}
	printf("Lutador mais magro: %.2f", menosp);
}
