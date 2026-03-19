#include <stdio.h>

int main(){
	float num;
	
	printf("Digite um numero: ");
	scanf("%f", &num);

	if(num > 0.1 ){
		printf("Numero positivo!\n");
	}	
	
	if(num == 0){
		printf("Neutro!\n");
	}
	
	if(num < 0){
		printf("Numero negativo!\n");
	}
	
	
}
