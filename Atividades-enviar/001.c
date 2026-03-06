/*
1 – Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
 a) o número digitado ao quadrado;
 b) o número digitado ao cubo;
 
ENTRADA DE DADOS
 Digitar o número
 
PROCESSAMENTO
 fazer o numero ao quadrado e depois ao cubo
SAIDA
 O num ao quadrado e:  , e ao cubo e: 
*/

#include <stdio.h>

int main(){
	int num, quadrado, cubo;
	
	printf("Caro usuario insira um numero positivo e maior que 0 para realizarmos a elevacao ao quadrado e ao cubo:  ");
	scanf("%i", &num);
	
	quadrado = num * num;
	cubo =	num * num * num;
	
	printf("Os resuldados sao: \n");
	printf("Numero %i ao quadrado e: %i \n", num, quadrado);
	printf("Numero %i ao cubo e: %i", num, cubo);
}

/*
#include <stdio.h>

int main() {
    int num;
    int quadrado, cubo;

    printf("Caro usuario, insira um numero positivo maior que zero: ");
    scanf("%d", &num);

    if (num > 0) {

        quadrado = num * num;
        cubo = num * num * num;

        printf("Os resultados sao:\n");
        printf("Numero %d ao quadrado: %d\n", num, quadrado);
        printf("Numero %d ao cubo: %d\n", num, cubo);

    } else {
        printf("Numero invalido. Digite um valor maior que zero.\n");
    }

    return 0;
}
*/
