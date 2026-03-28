#include <stdio.h>

int main(){
	int atc1, atc2;
	int def1, def2;
	
	scanf("%i", &def1);
	scanf("%i", &atc2);
	scanf("%i", &atc1);
	scanf("%i", &def2);

	if( atc1 > def2){
		printf("atc1 ganhou");
	}
	else if(atc2 > def1){
		printf("Atc2 ganhou");
	}
	else if(atc1 == def2 && atc2 == def1){
		printf("Empate");
	}
}
