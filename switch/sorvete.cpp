#include <stdio.h>

int main(){
	// dado simples int ou algo que vire int char
	char sabor, pergunta;
	int bolas;
	
	printf("Digite o sabor: ");
	scanf("%c", &sabor);
	
	printf("Digite a quantidade de bolas: ");
	scanf("%i", &bolas);

	switch(sabor){
		case  'M': case 'm':
			printf("Deseja casquinha: ");
			scanf("%c", &pergunta);
			if(pergunta == 's' || pergunta == 'S'){
				printf("Seu sorvete é uma casquinha de Morango com %i bolas custa R$ %i", bolas*1.50+3);
			}
			else
			printf("Seu sorvete é de Morango com %i bolas custa R$ %i",  bolas*1.50);
			break;	
		case  'C': case 'c':
			printf("Seu sorvete é de Creme com %i bolas custa R$ %.2f",  bolas*1.50);
			break;
		case  'F': case 'f':
			
			printf("Seu sorvete é de Flocos com %i bolas custa R$ %.2f",  bolas*1.50);
			break;	
		case  'A': case 'a':
	
			printf("Seu sorvete é de Ameixa com %i bolas custa R$ %.2f", bolas*1.50);
			break;	
	
	
		defaut:
			printf("Invalido");
	}
	
	
	
}

