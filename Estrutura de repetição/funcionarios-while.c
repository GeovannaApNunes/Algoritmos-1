#include <stdio.h>

int main()
{
    int i=1, maior=0 , pergunta=1;
    float salario, total=0;
    
    while(pergunta == 1){
      printf("Quantidade do salario do %i funcionario: ", i);
      scanf("%f", &salario);  
      
      if(salario > 1600){
          maior= maior+1;
      }
      
      printf("Deseja continuar prezado usuario?  ()1-sim 2-nao)");
      scanf("%i", &pergunta);
      i++;
    }
    
    printf("A quantidade de funcionarios que ganham mais de R$1600 sao %i", maior);
}
