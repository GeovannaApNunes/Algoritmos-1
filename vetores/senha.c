#include <stdio.h>
#include <string.h>
int main(){
	char senha[10];
	int i;
	
	printf("Digite a senha: ");
	scanf("%s", &senha);
	
	if(strcmp(senha, "ALMA")==0){
		printf("Senha Correta");
	}
	else{
		printf("Senha incorreta");
	}
	
	for(i=0; i<strlen(senha);i++){
		if(senha[i] == 'A'){
			senha[i] = '4';
		} 
		
		if(senha[i] == 'B'){
			senha[i] = '$';
		} 
		
		if(senha[i] == 'C'){
			senha[i] = '8';
		} 
		
		if(senha[i] == 'D'){
			senha[i] = '@';
		} 
		
		if(senha[i] == 'E'){
			senha[i] = '9';
		} 
		
		if(senha[i] == 'F'){
			senha[i] = '%';
		} 
		
		if(senha[i] == 'G'){
			senha[i] = '*';
		} 
	}
	
	printf("Senha criptografia %s\n",senha);
	
	
	for(i=0; i<strlen(senha);i++){
		if(senha[i] == '4'){
			senha[i] = 'A';
		} 
		
		if(senha[i] == '$'){
			senha[i] = 'B';
		} 
		
		if(senha[i] == '8'){
			senha[i] = 'C';
		} 
		
		if(senha[i] == '@'){
			senha[i] = 'D';
		} 
		
		if(senha[i] == '9'){
			senha[i] = 'E';
		} 
		
		if(senha[i] == '%'){
			senha[i] = 'F';
		} 
		
		if(senha[i] == '*'){
			senha[i] = 'G';
		} 
	}
	
	printf("Senha discriptografia %s\n",senha);
	
}
