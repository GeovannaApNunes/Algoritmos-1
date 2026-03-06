#include <stdio.h>

int main() {
    int  gols, partidas;
    float media;

    printf("Digite a quantidade de gols: ");
    scanf("%d", &gols);
    
    printf("Digite a quantidade de partidas jogadas: ");
    scanf("%d", &partidas);
    
    media = (float)(gols + partidas) / 2;

    printf("Voce tem %d gols marcados, %d partidas jogadas e sua media e de %.2f.", gols, partidas, media);

    return 0;
}
