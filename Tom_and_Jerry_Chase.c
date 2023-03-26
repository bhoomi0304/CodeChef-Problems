#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int jerry,tom;
	    scanf("%d%d",&jerry,&tom);
	    (jerry<tom)?printf("YES\n"):printf("NO\n");
	}
	return 0;
}

