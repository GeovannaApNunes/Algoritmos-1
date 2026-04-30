#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	float alt, maior;
	system("color 0A");
	maior=0;
	for(i=1; i <= 5; i++){
		printf("Digite a sua %ia altura: ", i);
		scanf("%f", &alt);
		if(alt > maior)
			maior = alt;
	}
	printf("A maior altura e: %.2f", maior);
}
