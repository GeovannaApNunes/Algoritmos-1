#include <stdio.h>

int main(){
	// dado simples int ou algo que vire int char
	char cal;
	float num1, num2, total;
	
	printf("Digite a operacao: ");
	scanf("%c", &cal);
	
	printf("Digite o primeiro num: ");
	scanf("%f", &num1);
	
	printf("Digite o segundo num: ");
	scanf("%f", &num2);

	switch(cal){
		case  '+':
			 total= num1+num2;
			printf("Soma = %.2f", total);
			break;	
		case '-':
			 total= num1-num2;
			printf("Subtracao = %.2f", total);
			break;		
		case  '*':
			 total= num1*num2;
			printf("Multiplcacao = %.2f", total);
			break;	
		case  '/':
			 total= num1/num2;
			printf("Divisao = %.2f", total);
			break;	
	
		defaut:
			printf("Invalido");
	}
	
	
	
}

