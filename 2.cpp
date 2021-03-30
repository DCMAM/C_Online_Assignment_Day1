#include <stdio.h>

int main(){
	char string1[100000];
	scanf("%[^\n]", &string1); getchar();
	
	int counter = 0, i=0;
	while(string1[i] != '\0'){
		if(string1[i] == ' ') counter++;
		if(counter % 2 == 0) printf("%c", string1[i]);
		i++;
	}
	printf("\n");
	
	return 0;
}
