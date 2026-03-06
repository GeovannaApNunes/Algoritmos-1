#include <stdio.h>

int main() {
    int cartoesAmarelos;

    printf("Quantos cartoes amarelos o jogador recebeu: ");
    scanf("%d", &cartoesAmarelos);

    if (cartoesAmarelos >= 2) {
        printf("Jogador expulso! Cartao vermelho.\n");
    } else {
        printf("Jogador continua em campo.\n");
    }

    return 0;
}
