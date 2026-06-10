#include <stdio.h>
#define TAMANHO 5
int main(){
	int dependentes[4];
	int idade[4];
	int i;
	int maistrinta=0;
	
	for(i=0; i<4; i++){
		printf("Digite o dependente: ");
		scanf("%i", &dependentes[i]);
		printf("Digite o idade: ");
		scanf("%i", &idade[i]);
	}
	
	for(i=0; i<4; i++){
		printf("Dependentes %i Idade %i\n", dependentes[i], idade[i]);	
	}
	
	printf("Selecionados\n");
	for(i=0; i<4; i++){	
		if(idade[i]>30){
			printf("Dependentes %i Idade %i\n", dependentes[i], idade[i]);
		}
	}
}
