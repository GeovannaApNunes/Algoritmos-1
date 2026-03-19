#include <stdio.h>

int main(){
	char sigla;
	
	printf("Digite a sigla: : ");
	scanf("%c", &sigla);

	if(sigla == 'm' ){
		printf("Masculino\n");
	}	
	
	if( sigla == 'f'){
		printf("Feminino");
	}
	
}
