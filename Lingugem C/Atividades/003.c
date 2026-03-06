#include <stdio.h>

int main() {
    int  tempo, horas, minutos;

    printf("Digite o tempo jogado em minutos: ");
    scanf("%d", &tempo);
    
    horas = tempo / 60;      // parte inteira
    minutos = tempo % 60;    // resto

    printf("%d minutos equivalem a %d hora(s) e %d minuto(s)\n", tempo, horas, minutos);

    return 0;
}
