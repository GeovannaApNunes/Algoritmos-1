/*
3 – Pedro comprou um saco de ração com peso em quilos. Ele possui um gato, para o qual 
fornece a quantidade de ração em gramas. A quantidade diária de ração fornecida para o gato é sempre a mesma. 
Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para
o gato diariamente, calcule e mostre quanto dias o saco de ração irá alimentar o gato.

ENTRADA DE DADOS
peso do saco de ração, gato come em gramas
 
PROCESSAMENTO
Converter kilos pra gramas e calcular os dias

SAIDA
 x dias vão alimentar seu gato com esse saco de ração
*/

#include <stdio.h>

int main(){

    float kilos, gramas, racaoTotal;
    int dias;

    printf("Quantos kilos tem o saco de racao: ");
    scanf("%f", &kilos);

    printf("Quantas gramas o gato come por dia: ");
    scanf("%f", &gramas);

    racaoTotal = kilos * 1000;
    dias = racaoTotal / gramas;

    printf("O saco de %.2f kilos fornece racao por %i dias se o gato comer %.2f gramas por dia.", kilos, dias, gramas);

}
