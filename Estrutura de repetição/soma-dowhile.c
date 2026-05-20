#include <stdio.h>

int main(){
	int i=1;
	float nota, media, soma=0;
	
	do{
		printf("Digite a %i nota: ", i);
		scanf("%f", &nota);
		
		soma = nota+soma;
		
		i++;
	}while(i<= 5);
    
    media = soma/5;
    
    printf("A media das notas e %.2f", media);
    
    return 0;
}
