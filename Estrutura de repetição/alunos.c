#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	float nota, notaf, notan;
	notan=0;
	system("color 0A");
	for(i=1; i <= 5; i++){
		printf("Digite a nota do %ia aluno: ", i);
		scanf("%f", &nota);
		if( nota > notan ){
			notan = nota ;
		}
		 if(nota> notaf){
			notaf = nota;
		}
	}
	printf("Melhor nota: %.2f/n", notan);
	printf("Pior nota: %.2f", notaf);
}
