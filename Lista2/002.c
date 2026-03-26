#include <stdio.h>

int main(){
	int num1, num2;
	char expressao; 
	
	printf("Digite a expressao a ser realizada (+, -, *, /): ");
	scanf("%c", &expressao);
	
	printf("Digite o primeiro numero: ");
	scanf("%i", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%i", &num2);
	
	
			
	if ( expressao == '+'){
	  int soma=num1+num2;
		printf("A soma dos numeros e: %i ", soma);
	}
		
	if ( expressao == '-'){
	  int sub=num1-num2;
		printf("A subtracao dos numeros e: %i", sub);
	}
	
	if ( expressao == '*'){
	  int multi=num1*num2;
		printf("A multiplicacao dos numeros e: %i", multi);
	}
	
	if ( expressao == '/'){
	  int div=num1/num2;
		printf("A divisao dos numeros e: %i", div);
	}
	
}
