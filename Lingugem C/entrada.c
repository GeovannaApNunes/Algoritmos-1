#include <stdio.h>

int main(){
	/*int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num );
	
	printf("O numero foi o: %d", num);
	
	*/
	int idade;
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	if(idade >=  18){
		printf("MAIOR");
		// = -> atribuição
		// == -> igualdade
		// > -> maior
		// < -> menor
		// != -> diferente
		// && -> and (e)
	} else{
		printf("MENOR");
	}
	
	return 0;
}
