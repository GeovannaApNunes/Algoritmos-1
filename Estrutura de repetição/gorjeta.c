#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, gorjeta;
	float valorc, valorp;
	gorjeta=0;

	for(i=1; i <= 5; i++){
		printf("Digite o valor total: ", i);
		scanf("%f", &valorc);
		printf("Digite o valor a pagar: ", i);
		scanf("%f", &valorp);
		if( valorc < valorp){
		    gorjeta++;
		}
	}
	printf("A quantidade de clientes que deixou gorjeta foram: %i", gorjeta);
}
