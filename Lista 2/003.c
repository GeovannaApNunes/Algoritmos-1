#include <stdio.h>

int main(){
	float deposito, taxa, rendimento, valorTotal;
	
	printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);

    printf("Digite a taxa de juros (%%): ");
    scanf("%f", &taxa);

    rendimento = deposito * (taxa / 100);
    valorTotal = deposito + rendimento;

    printf("Rendimento: %.2f\n", rendimento);
    printf("Total apos rendimento: %.2f\n", valorTotal);

    return 0;
}
