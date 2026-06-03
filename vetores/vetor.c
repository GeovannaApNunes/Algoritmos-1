#include <stdio.h>

int main(){
	int a[5];
	int i=0;
	
	
	for(i=0;i<5;i++){
		scanf("%i", &a[i]);
	}

	printf("Vetor lugar %i", a[3]);
}
