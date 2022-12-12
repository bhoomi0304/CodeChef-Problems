#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    long long int nc,ka;
	scanf("%lld%lld",&nc,&ka);
	int a[nc];
	for(int i=0;i<nc;i++){
	    scanf("%d",&a[i]);
	}
	long long int product=1;
	int flag=0;
	for(int i=0;i<nc;i++){
	    product=product*a[i]%ka;
	    if(product==0){
	        printf("YES\n");
	        flag=1;
	        break;
	    }
	}
	if(flag==0){
	    printf("NO\n");
	}
	
	}
    
	return 0;
}

