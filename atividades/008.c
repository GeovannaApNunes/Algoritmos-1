#include <stdio.h>

int main(){
	char sabor;
	int bolas;
	float vt;
	
	printf("Digite sabor de sorvete: ");
	scanf("%c", &sabor);
	
	printf("Digite a quantidade de bolas: ");
	scanf("%i", &bolas);
	
	vt = bolas * 1.50;
	

	if(sabor == 'M'  || sabor == 'm' ){
		printf("O sabor escolhido e morango e o valor a pagar pela quantidade de bolas e R$ %.2f", vt);
	}	
	
	else if( sabor == 'C' || sabor == 'c'){
		printf("O sabor escolhido e creme e o valor a pagar pela quantidade de bolas e R$ %.2f", vt);
	}	
	
	else if( sabor == 'f' || sabor == 'F'){
		printf("O sabor escolhido e flocos e o valor a pagar pela quantidade de bolas e R$ %.2f", vt);
	}
		
	else if( sabor == 'A' || sabor == 'a'){
		printf("O sabor escolhido e ameixa e o valor a pagar pela quantidade de bolas e R$ %.2f", vt);
	}


	else
		printf("Invalido");
	
	
	
}
