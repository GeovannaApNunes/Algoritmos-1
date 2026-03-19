#include <stdio.h>

int main(){
	float valor1, valor2;
	
	printf("Qual o primeiro salario: ");
	scanf("%f", &valor1);
	
	printf("Qual o segundo salario: ");
	scanf("%f", &valor2);

	if(valor1 >= valor2){
	printf("O primeiro salario e maior\n");
	}	
	
	if(valor2 >= valor1){
	printf("O segundo valor e maior\n");
	}
	
}
