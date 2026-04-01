#include <stdio.h>

int main(){
	int pag;
	float valor;
	int prod;
	
	printf("Digite o  numero produto: ");
	scanf("%i", &prod);
	
	printf("Digite o  valor do produto: ");
	scanf("%f", &valor);
	
	printf("Digite a forma de pagamento: ");
	scanf("%i", &pag);
	
	if(pag == 1){
		float vt= (valor * 10/100); 
		
		printf("Valor a vista e R$ %.2f", vt);
	}
	
	if(pag == 2){
		float vtl= (valor *0.5) ;
		
		printf("Valor no cartao e R$ %.2f", vtl);
	}
	
	if(pag == 3){
		float vta= (valor/ 2);
		
		printf("Valor parcelado e R$ %.2f", vta);
	}
	
	if(pag == 4){
		float vtal= (valor *0.10) / 3;
		
		printf("Valor em tres vezes e R$ %.2f", vtal);
	}
}
