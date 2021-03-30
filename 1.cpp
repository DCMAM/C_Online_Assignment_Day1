#include <stdio.h>

int main(){
	int T;
	char C;
	scanf("%d %c", &T, &C); getchar();
	char string1[T];
	scanf("%[^\n]", &string1); getchar();
	
	int flag = 0;
	int i=0;
	while(string1[i] != '\0'){
		if(string1[i] == C){
			flag = 1;
			break;
		}
		i++;
	}
	
	if(flag == 1) printf("Character found!\n");
	else if (flag == 0) printf("Character not found!\n");
	return 0;
}
