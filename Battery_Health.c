#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int x;
	    scanf("%d",&x);
	    (x>=80)?printf("YES\n"):printf("NO\n");
	}
	return 0;
}

