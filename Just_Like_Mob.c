#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	     int n,m,k,x;
	     scanf("%d%d%d%d",&n,&m,&k,&x);
	     int temp = n*k+m;
	     int w = n*(k-1);
	     int variable = x%temp;
	     if(variable!=0 && (variable-w)<=0){
	        printf("NO\n");
	     }
         else 
            printf("YES\n");
	}
    
	return 0;
}

