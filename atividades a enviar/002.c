//Escreva uma Programa que receba a idade de 15 pessoas, calcule e imprima: a quantidade de pessoas em cada faixa etária.
//As faixas etárias são
//1 a 15 anos - Menor de Idade
//16 a 60 anos - Adulto
//Acima de 61 anos, inclusive - Idoso

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
    
    return 0;
}
