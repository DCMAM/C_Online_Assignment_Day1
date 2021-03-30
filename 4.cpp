#include <stdio.h>

int main(){
	int t=0;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		for(int j=0; j<i*2-1; j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=1; i<=t-1; i++){
		for(int j=0; j<i*2+1; j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<t-2; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
