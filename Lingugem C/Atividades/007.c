#include <stdio.h>

int main() {
    int idade;

    printf("Quantos anos voce tem:  ");
    scanf("%d", &idade);

    if (idade <= 20) {
        printf("Pode jogar na categoria sub 20!\n");
    } else {
        printf("Pode jogar no profissional.\n");
    }

    return 0;
}
