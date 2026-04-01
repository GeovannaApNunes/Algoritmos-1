#include <stdio.h>

int main(){
	
	int idade;
	printf("Qual sua idade: ");
	scanf("%i", &idade);
	
	if(idade > 5 && idade < 7){
		printf("Infantil A");
	}
	
	if(idade > 8 && idade < 10){
		printf("Infantil B");
	}
	
	if(idade > 11 && idade < 13){
		printf("Juvenil A");
	}
	
	if(idade > 14 && idade < 17){
		printf("Juvenil B");
	}
	
	if(idade >= 18){
		printf("Adulto");
	}
}
