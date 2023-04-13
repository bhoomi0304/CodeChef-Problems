#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int sleep;
	    scanf("%d",&sleep);
	    (sleep>=7)?printf("No\n"):printf("YES\n");
	}
	return 0;
}
