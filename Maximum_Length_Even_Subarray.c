#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int n,x;
	    scanf("%d",&n);
	    x=(n*(n+1))/2;
	    if(x%2==0) printf("%d\n",n);
	    else printf("%d\n",n-1); 
	}
    
	return 0;
}

