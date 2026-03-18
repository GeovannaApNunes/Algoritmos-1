#include <stdio.h>

int main(){
	float nota;
	
	printf("Qual sua nota: ");
	scanf("%f", &nota);

	if(nota >= 60){
	printf("Aprovado\n");
	}	
	
	if((nota >= 40) && (nota < 60)){
	printf("Recuperacao\n");
	}
	
	if (nota < 40){
	printf("Reprovado\n");
	}
	
}
