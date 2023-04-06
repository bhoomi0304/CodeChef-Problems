#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int n,k;
	    scanf("%d %d",&n,&k);
        if(k>n)
            printf("yes\n");
        else
            printf("no\n");
	}
	return 0;
}

