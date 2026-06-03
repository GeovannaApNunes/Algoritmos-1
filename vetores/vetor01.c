#include <stdio.h>

int main(){
	int a[5];
	int i;
	a[0]=10;
	a[1]=8;
	a[2]=12;
	a[3]=14;
	
//	printf("%i %i %i %i", a[0], a[1], a[2], a[3]);

	for(i=0; i<5; i++){
		printf("%i  ", a[i]);
	}

}
