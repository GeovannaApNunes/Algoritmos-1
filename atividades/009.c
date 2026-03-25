#include <stdio.h>

int main(){
	char pao;
	int quant;
	float vts , vtd;
	
	printf("Digite o tipo de pao que voce deseja: ");
	scanf("%c", &pao);

	printf("Digite a quantidade de paes: ");
	scanf("%i", &quant);
	
	vts = quant * 3.00;
	vtd = quant * 5.00;

	if(pao == 'S'  || pao == 's' ){
		printf("O pao escolhido e de Sal e o valor a pagar por ele e R$ %.2f", vts);
	}	
	
	else if( pao == 'D' || pao == 'd'){
		printf("O pao escolhido e de Doce e o valor a pagar por ele e R$ %.2f", vtd);
	}	

	else
		printf("Invalido");
	
	
	
}
