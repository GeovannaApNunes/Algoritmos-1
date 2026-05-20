#include <stdio.h>

int main()
{
    int i=1, pergunta=1;
	float peso, menosp;
	menosp=999;
    
    while(pergunta == 1){
		printf("Digite o peso do %i a lutador: ", i);
		scanf("%f", &peso);
		
		if( peso < menosp ){
			menosp = peso ;
		}
		
	  printf("Deseja continuar prezado usuario?  ()1-sim 2-nao) ");
      scanf("%i", &pergunta);
      
      i++;
	}
	
	printf("Lutador mais magro: %.2f", menosp);
}
