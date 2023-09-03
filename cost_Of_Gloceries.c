#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int n,min,sum=0;
	    scanf("%d%d",&n,&min);
	    int fre[n],cost[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&fre[i]);
	    }
	    for(int i=0;i<n;i++){
	        scanf("%d",&cost[i]);
	    }
	    for(int i=0;i<n;i++){
	        if(fre[i]>=min){
	            sum+=cost[i];
	        }
	    }
	    printf("%d\n",sum);
	    
	}
	return 0;
}

