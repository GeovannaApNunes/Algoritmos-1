#include <stdio.h>

int main(){
	int dados[10] [4];
	int i;
	int repro=0;
	int exame=0, exam=0, alunos=0;
	
	for(i=1; i<3; i++){
		printf("Digite a aprovacao: ");
		scanf("%i", &dados[i] [0]);
		
		printf("Digite a reprovacao: ");
		scanf("%i", &dados[i] [1]);
		
		printf("Digite o exame: ");
		scanf("%i", &dados[i] [2]);
		
		printf("Digite o ano: ");
		scanf("%i", &dados[i] [3]);
	}
	
	//a
	for(i=1; i<3; i++){
		if(dados[i][1] >= 1){
			repro++;
		}
	}
	
	printf("Reprovados: %i\n", repro);
	
	//b
	for(i=1; i<3; i++){
		if(dados[i] [2] > 0){	
			exame = dados[i] [2] + exame;
			
			exam++;
		}
	}
	
	printf("Quantidade de pessoas que fizeram exame: %i\n", exam);
	printf("Qtde total de exames: %i\n", exame);
	
	//c
	for(i=1; i<3; i++){
		if(dados[i] [3] == 2010 && dados[i] [2] >= 2 ){	
			alunos++;
		}
	}

	printf("Qtde de alunos que ingressaram em 2010 e tem mais de 2 exames: %i\n", alunos);
	
	
}
