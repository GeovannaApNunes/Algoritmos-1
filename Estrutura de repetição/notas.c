#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	float nota, maisCara;
	maisCara=0;
	system("color 0A");
	for(i=1; i < 10; i++){
		printf("Digite o valor da %ia venda: ", i);
		scanf("%f", &nota);
		if(nota > maisCara){
			maisCara = nota;
		}
	}
	printf("Mais cara: %.2f", maisCara);
}
