#include <stdio.h>

int main(){
	int i=1;
	float nota;
	
	while(i<=5){
		printf("Digite as notas: ");
		scanf("%f", &nota);
		i=i+1;
	}
	
	printf("Fim");
}
