#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int m,n;
	    scanf("%d %d",&n,&m);
	    if(n<m)
	        printf("%d\n",n);
	    else
	        printf("%d\n",(2*(n-m)+m));
	}
	return 0;
}

