#include <stdio.h>

int main(void) {
	// your code goes here
	int T;

	scanf("%d",&T);
	while(T--){
	    int n;
	    	int count=0;
	    scanf("%d",&n);
	    int a[n];
	    int b[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    for(int i=0;i<n;i++){
	        scanf("%d",&b[i]);
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]>2*b[i] || b[i]>2*a[i]){
	            count++;
	        }
	    
	        
	    }  
	    printf("%d\n",n-count);
	    
	}
	return 0;
}

