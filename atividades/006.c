/*6 - Uma secretaria necessita de um programa para calcular a nota média de um aluno. Sendo assim, desenvolva um algoritmo que receba três notas, calcule e mostre a média aritmética entre elas.

Variavel

Entrada de dados
3 notas solicitadas

processamento
calcular media

saida de dados
Calcule e mostre a média aritmética entre elas

*/
#include <stdio.h>

int main(){
	int nota1, nota2, nota3;
	float media;
	
	printf("Digite a primeira nota: ");
	scanf("%i",&nota1);
		
	printf("Digite a segunda nota: ");
	scanf("%i",&nota2);
		
	printf("Digite a terceira nota: ");
	scanf("%i",&nota3);
	
	media = (nota1 + nota2 + nota3) / 3;
	
	printf("A media das suas notas e: %.2f", media);
	
	return 0;
	
	
	
}
