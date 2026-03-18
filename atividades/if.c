#include <stdio.h>

int main(){
	int idade;
	
	printf("Qual sua idade: ");
	scanf("%i", &idade);
	
	if (idade < 19){
	printf("Jovem\n");
	printf("Aproveite muitooooo\n");
	}
	
	if(idade > 19)
	printf("Idoso\n");
	
	if(idade == 19)
	printf("Aproveite, voce vai virar idoso\n");
}
