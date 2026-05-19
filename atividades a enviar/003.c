#include <stdio.h>

int main()
{
    int i = 1;
    int masc = 0, fem = 0;

    char sexo;

    float altura;
    float somaAlt = 0;
    float media;

    while(i <= 5)
    {
        printf("Qual o seu genero: M - Masculino | F - Feminino: ");
        scanf(" %c", &sexo);

        printf("Qual a sua altura: ");
        scanf("%f", &altura);

        if(sexo == 'M' || sexo == 'm')
        {
            masc++;
        }

        if(sexo == 'F' || sexo == 'f')
        {
            fem++;
            somaAlt += altura;
        }

        i++;
    }

        media = somaAlt / fem;

    printf("A quantidade de homens e %i\n", masc);
    printf("A media das alturas das mulheres e %.2f\n", media);

    return 0;
}
