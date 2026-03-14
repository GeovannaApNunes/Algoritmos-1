#include <stdio.h>

int main(){
	float prova1;
	float prova2;
	float media;
	
	printf("Digite o valor da primeira prova: ");
	scanf("%f", &prova1);
	
	printf("Digite o valor da segunda prova: ");
	scanf("%f", &prova2);
	
	media = (prova1 + prova2) / 2 ;
	
	if(media >= 7){
		printf("Aprovado");
	}else if(media < 7 && media >=  4){
		printf("Recuperacao");
	}else {
		printf("Reprovado");
	}
}
