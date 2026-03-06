#include <stdio.h>

int main() {
    int gols;

    printf("Quantos gols voce marcou nessa temporada: ");
    scanf("%d", &gols);

    if (gols >= 10) {
        printf("Excelente campanha!\n");
    } else if (gols >= 5) {
        printf("Campanha mediana.\n");
    } else {
        printf("Campanha fraca.\n");
    }

    return 0;
}
