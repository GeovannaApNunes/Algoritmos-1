#include <stdio.h>

int main(){
	int fronha, lencol, cobertor, valorTotal;
	
	printf("Quantas fronhas voce deseja comprar: ");
	scanf("%i", &fronha);
	
	printf("Quantos lencol voce deseja comprar: ");
	scanf("%i", &lencol);
	
	printf("Quantos cobertores voce deseja comprar: ");
	scanf("%i", &cobertor);
	
	valorTotal = (fronha * 20) + (lencol * 40) + (cobertor * 100);
	
	printf("O valor total da sua compra de: %i fronhas, %i lencois e %i cobertores e R$ %i.", fronha, lencol, cobertor, valorTotal);
}
