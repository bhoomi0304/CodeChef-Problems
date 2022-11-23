#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    long int N;
	    int A,B;
	    scanf("%ld%d%d",&N,&A,&B);
	    int x=log2(N);
	    printf("%d\n",(x*A+(x-1)*B));
	    
	}
    
	return 0;
}

