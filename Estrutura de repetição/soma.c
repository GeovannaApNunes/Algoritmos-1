#include <stdio.h>

int main(){
	int i;
	float nota, media, soma=0;
	
	for(i=1; i<= 5; i++){
		printf("Digite a %i nota: ", i);
		scanf("%f", &nota);
		
		soma = nota+soma;
	}
    
    media = soma/5;
    
    printf("A media das notas e %.2f", media);
    
    return 0;
}
