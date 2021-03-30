#include <stdio.h>

int main(){
	
	int t;
	scanf("%d", &t); getchar();
	
	for(int j=0; j<t; j++){
		char string1[100000];
		scanf("%[^\n]", &string1); getchar();
		
		int total = 0, i=0;
		while(string1[i] != '\0'){
			if(string1[i] >= 'a') string1[i] = string1[i] - ('a' - 'A');
			total = total + (string1[i] % 65);
			i++;
		}
		
		printf("Case #%d: %d\n", j+1, total);
	}
	return 0;
}
