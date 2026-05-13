#include <stdio.h>

int main(){
	int i=1, quant=0;
	float nota;
	
	while(i<=5){
		printf("Digite as notas: ");
		scanf("%f", &nota);
		if(nota >= 60)
		    quant++;
		    
		i++;
	}
	
	printf("Quant maior que 60 = %i\n", quant);
}
