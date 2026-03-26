#include <stdio.h>

int main(){
	int ano, idade; 
	
	printf("Digite o ano de seu nascimento: ");
	scanf("%i", &ano);
	
	idade= 2026-ano;
		
	
	if ( idade >= 16 && idade <18){
		printf("Voce pode votar\n");
	}
		
	else if (idade >= 18){
		printf("Voce pode tirar a carteira de Habilitacao\n");
	}
		
	else{
		printf("Não pode votar nem tirar carteira");
	}
	
}
