#include <stdio.h>

int main(){
	float area, largura, comprimento;
	
	printf("Digite a largura da quadra: ");
	scanf("%f", &largura);
	
	printf("Digite o comprimento da quadra: ");
	scanf("%f", &comprimento);
	
	area = comprimento * largura;
	
	printf("A area dessa quadra e %.2f ", area);
}
