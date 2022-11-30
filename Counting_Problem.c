#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int n;
	    scanf("%d",&n);
	    int arr[n];
	    int count=0;
	    for(int i=0; i<n; i++){
	        scanf("%d",&arr[i]);
	        if(arr[i]%2!=0)
	        count++;
	    }
	    if(count==0 || count%2)
	        printf("NO\n");
	    else
	        printf("YES\n");


	}
    
	return 0;
}

