#include <stdio.h>

int main(){
	int i=1, quantM=0, quantF=0;
	char aluno;
	float totalF, totalM;
	
	while(i<=6){
		printf("Digite o genero dos alunos: ");
		scanf("%c", &aluno);
		
		fflush(stdin); 
		
		if(aluno == 'M')
		    quantM++;
		
		if(aluno == 'F')
		    quantF++;
		    
		i++;
	}
	
	totalF = quantF * 100/6;
	totalM = quantM * 100/6;
	
	printf("A porcentagem de alunos e: %.2f Homens e %.2f Mulheres", totalM, totalF);
}
