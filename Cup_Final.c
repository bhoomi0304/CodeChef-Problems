#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int m,n,DD;
	    scanf("%d %d %d",&m,&n,&DD);
	    if((abs(m-n))<=DD)
	    printf("Yes\n");
	    
	    else
	    printf("No\n");
	    
	}
	return 0;
}

