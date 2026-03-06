#include <stdio.h>

int main() {
    float salario1, salario2, diferenca;

    printf("Insira o primeiro salario: ");
    scanf("%f", &salario1);
    
    printf("Insira o segundo salario: ");
    scanf("%f", &salario2);
    
    diferenca = fabs(salario1 - salario2);
    
    printf("A diferenca de salario e %.2f", diferenca);

    return 0;
}
