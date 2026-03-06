/*
4 – Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo. 
Esse programa deverá calcular e mostrar a quantidade de convites que devem ser vendidos para que pelo menos o 
custo do espetáculo seja alcançado.

ENTRADA DE DADOS

 
PROCESSAMENTO

SAIDA
 
*/

#include <stdio.h>

int main(){

    float custo, preco;
    int convites;

    printf("Qual o custo do espetaculo: ");
    scanf("%f", &custo);

    printf("Qual o preco do convite: ");
    scanf("%f", &preco);

    convites = custo / preco;

    printf("Devem ser vendidos %d convites para pagar o espetaculo.", convites);

}
