#include <stdio.h>

int main(){
	float peso, alt, imc;
	
	printf("Qual seu peso: ");
	scanf("%f", &peso);
	
	printf("Qual sua altura: ");
	scanf("%f", &alt);
	
	imc= peso / (alt*alt);
	// #include <stdio.h> 
	// pow()
	
	if( imc < 18.5){
		printf("Abaixo do peso");
	}
	
	else if(imc >= 18.5 && imc < 25){
		printf("Peso Normal");
	}
	
	else if(imc >= 25 && imc < 30){
		printf("Acima do peso");
	}
	
	else{
		printf("Obeso");
	}
}
