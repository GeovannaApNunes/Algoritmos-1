
#include <stdio.h>

int main()
{
    int idade, i=1, menor=0, maior=0, idoso=0;
    
    while(i<=15){
      printf("Qual a idade da %i pessoa: ", i);
      scanf("%i", &idade);  
      
      if(idade >= 1 && idade<=15){
    	menor++;
	  }
	  
	  else if(idade >= 16 && idade <= 60){
        maior++;
      }
      
      else if(idade >=61){
        idoso++;
	  }
	  
      i++;
    }
    
    printf("A quantidade de pessoas menores de idade sao %i\n", menor);
    printf("A quantidade de pessoas adultas sao %i\n", maior);
    printf("A quantidade de idosos sao %i\n", idoso);
}
