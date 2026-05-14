#include <stdio.h>

int main()
{
    int vendedor, i=1, vendT=0 , pergunta;
    float total=0;
    
    while(i<=6){
      printf("Quantas vendas o %i fez: ", i);
      scanf("%i", &vendedor);  
      
      if(vendedor > 10){
          vendT= vendT+1;
      }
      i++;
    }
    
    total = vendT*100/5;
    
    printf("A porcentagem de vendedores que atenderam mais de 10 pessoas e: %.2f", total);
}
