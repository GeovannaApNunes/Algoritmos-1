#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, contador;
	float nota;
	contador=0;
	system("color 0A");
	for(i=1; i <= 10; i++){
		printf("Digite a nota do %ia aluno: ", i);
		scanf("%f", &nota);
		if( nota >= 60 ){
		    contador++;
		}
	}
	printf("Alunos aprovados: %.i\n", contador);
}
