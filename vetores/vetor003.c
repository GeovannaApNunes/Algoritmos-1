#include <stdio.h>
#define TAMANHO 5
int main(){
	float salario[TAMANHO], flhpag=0;
	char sexo[TAMANHO];
	int i, f=0, m=0;
	
	for(i=0; i<TAMANHO; i++){
		printf("Digite o salario: ");
		scanf("%f", &salario[i]);
		
		printf("Digite o sexo: ");
		scanf(" %c", &sexo[i]);
	}
	
	for(i=0; i<TAMANHO; i++){
		if(sexo[i]=='F'){
			printf("Feminino %10.2f\n", salario[i]);
			f++;
		}
	}
	
	for(i=0; i<TAMANHO; i++){
		if(sexo[i]=='M'){
			printf("Masculino %10.2f\n", salario[i]);
			m++;
		}
	}
	
	printf("Mulheres %i\n Homens %i\n", f, m);
	
	for(i=0; i<TAMANHO; i++){
		printf("%i %10.2f %c\n", i, salario[i], sexo[i]);
	}
	
	for(i=0; i<TAMANHO; i++){
		if(salario>0){
			flhpag=salario[i]+flhpag;
		}
	}
	
	printf("Folha de pagamenstos: %10.2f" , flhpag);
}
