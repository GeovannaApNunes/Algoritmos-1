/*
Entrada de dados
Pegar o preço do sorvete e o valor que o cliente pagou

Processamento
Calcular o troco

Saida de dados
O troco e:
*/


#include <stdio.h>

int main(){
	float preco, valor, troco;
	
	printf("Digite o preco do sorvete: ");
	scanf("%f", &preco);
	
	printf("Digite o valor que o cliente pagou: ");
	scanf("%f", &valor);
	
	troco = valor - preco;
	
	printf("O troco e: %.2f", troco);
}
