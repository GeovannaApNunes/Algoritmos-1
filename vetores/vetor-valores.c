#include <stdio.h>

int main(){
//	int a[5] = {80, 70, 90, 85, 80};
	
	//	printf("%i %i %i %i", a[0], a[1], a[2], a[3], a[4]);
	
	int a[64]={10,15,8,20};
	int i;
	
	for(i=4; i<64;i++){
		a[i]=0;
	}
	for(i=0; i<64; i++){
		printf("%i\n", a[i]);
	}
	
	
	
	
	
	
}
