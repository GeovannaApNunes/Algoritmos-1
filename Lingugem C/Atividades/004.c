#include <stdio.h>

int main() {
    int vitorias, empates, derrotas;
    int pontos;

    printf("Quantas vitorias o time tem: ");
    scanf("%d", &vitorias);

    printf("Quantos empates o time tem: ");
    scanf("%d", &empates);

    printf("Quantas derrotas o time tem: ");
    scanf("%d", &derrotas);

    pontos = (vitorias * 3) + empates;

    printf("O time fez %d pontos.\n", pontos);

    if (pontos >= 3) {
        printf("Vitoria!\n");
    } else if (pontos >= 1) {
        printf("Empate.\n");
    } else {
        printf("Derrota.\n");
    }

    return 0;
}
