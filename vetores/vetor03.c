#include <stdio.h>
#define TAMANHO 6

int main(){
	int a[TAMANHO];
	int i, qtdeMaior=0;
	
	for(i=0; i<TAMANHO; i++){
		scanf("%i", &a[i]);
	}
	
	for(i=0; i<TAMANHO; i++){
		if(a[i]>60)
			qtdeMaior++;
			
		printf("\nQtde maior %i\n", qtdeMaior);
	}
	
	for(i=0; i<TAMANHO; i++){
		printf("%i", &a[])
	}

}
