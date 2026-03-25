#include <stdio.h>

int main(){
	char sigla;
	
	printf("Digite a sigla: : ");
	scanf("%c", &sigla);

	if(sigla == 'm'  || sigla == 'M' ){
		printf("Masculino\n");
	}	
	
	else if( sigla == 'f' || sigla == 'F'){
		printf("Feminino");
	}	
	else
		printf("Invalido");
	
}
