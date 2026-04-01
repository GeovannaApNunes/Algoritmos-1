#include <stdio.h>

int main(){
	// dado simples int ou algo que vire int char
	int mes;
	
	printf("Digite o mes: ");
	scanf("%i", &mes);
	
	switch(mes){
		case  1:
			printf("Janeiro");
			break;
			
		case 2:
			printf("Fevereiro");
			break;
			
		case 3:
			printf("Marco");
			break;
			
		case 4:
			printf("Abril");
			break;
			
		case 5:
			printf("Maio");
			break;
			
		defaut:
			printf("Invalido");
	}
	
	
	
}
