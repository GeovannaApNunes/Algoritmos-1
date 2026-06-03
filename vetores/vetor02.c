#include <stdio.h>

int main(){
	int a[4] = {20, 35, 40, 8};
	int b[4] = {7, 8, 11, 13};
	int c[4] ;
	int i;
	
	for(i=0; i<4; i++){
		c[i]= a[i]+b[i];
		printf("%i\n", c[i]);
	}

}
