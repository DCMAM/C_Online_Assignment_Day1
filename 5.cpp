#include <stdio.h>

int main(){
	int t, n;
	
	do{
		scanf("%d %d", &t, &n); 
		
		int check = 2;
		for(int i=1; i<n; i++)
			check = check * check;
		
		if (check >= t) break;
		else printf("Not possible!\n");
	}while(true);
	
	int total = 0;
	
	for(int i=0; i<t; i++){
		
		int x, decimal = 0, initial = 1, temp;
	 
		scanf("%d", &x);
		while (x > 0)
	    {
	        temp = x % 10;
	        decimal = decimal + temp * initial;
	        x = x / 10 ;
	        initial = initial * 2;
	    }
	    
		total = total + decimal;
	}
	
	printf("%d\n", total);
	
	return 0;
}
