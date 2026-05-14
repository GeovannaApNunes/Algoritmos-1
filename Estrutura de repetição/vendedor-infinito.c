#include <stdio.h>

int main()
{
    int vendedor, i=0, vendT=0 , pergunta=1;
    float total=0;
    
    while(pergunta == 1){
      printf("Quantas vendas o %i fez: ", i);
      scanf("%i", &vendedor);  
      
      if(vendedor > 10){
          vendT= vendT+1;
      }
      
      printf("Deseja continuar prezado usuario?  ()1-sim 2-nao)");
      scanf("%i", &pergunta);
      i++;
    }
    
    total = vendT*100/i;
    
    printf("A porcentagem de vendedores que atenderam mais de 10 pessoas e: %.2f", total);
}
