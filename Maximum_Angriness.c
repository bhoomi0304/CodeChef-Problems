#include <stdio.h>

int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    long long int N,K,sum;
	    scanf("%lld%lld",&N,&K);
	    sum=(N*(N-1))/2;
	    if(K<N/2){
	        long long int x=N-2*K;
	        sum-=(x*(x-1))/2;
	    }
	    printf("%lld\n",sum);
	}
    
	return 0;
}

