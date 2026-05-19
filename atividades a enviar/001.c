//Escreva um programa que receba a idade de 10 pessoas, calcule e imprima a quantidade de 
//pessoas maiores de idade (idade >= 18 anos).

#include <stdio.h>

int main()
{
    int idade, i=1, maior;
    
    while(i<=10){
      printf("Qual a idade da %i pessoa: ", i);
      scanf("%i", &idade);  
      
      if(idade > 18){
          maior++;
      }
      i++;
    }
    
    printf("A quantidade de pessoas maiores de idade sao %i", maior);
    
    return 0;
}
