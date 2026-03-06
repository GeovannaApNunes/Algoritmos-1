#include <stdio.h>

int main() {
    char nome[50];
    int idade, gols;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite a quantidade de gols: ");
    scanf("%d", &gols);
    
    printf("\n=================================================\n");

    printf("Seu nome e %s, voce tem %d anos e %d gols marcados.\n", nome, idade, gols);

    return 0;
}
