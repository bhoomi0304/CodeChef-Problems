#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int n,count=0;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]>=10 && a[i]<=60){
	            count++;
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}
