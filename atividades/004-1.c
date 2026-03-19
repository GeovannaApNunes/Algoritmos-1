#include <stdio.h>

int main(){
	int idade;
	
	printf("Qual sua idade : ");
	scanf("%i", &idade);

	if(idade >= 18){
	printf("Voce pode tirar habilitacao, parabens!\n");
	}	
	
	if(idade <= 18){
	printf("Futuramente voce vai conseguir tirar sua habilitacao!\n");
	}
	
}
