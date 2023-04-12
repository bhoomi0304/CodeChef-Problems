#include <stdio.h>

int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int n,k;
	    scanf("%d%d", &n, &k);
	    int a[n];
	    for(int i=0;i<n;i++){
	        scanf("%d", &a[i]);
	    }
	    for(int i=0;i<n;i++){
	        if((k-a[i])>=0){
	            printf("1");
	            k-=a[i];
	        }
	        else{
	            printf("0");
	        }
	    }
	    printf("\n");
	}
	return 0;
}

