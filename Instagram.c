#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int x,y;
	    scanf("%d%d",&x,&y);
	    (x>10*y)?printf("Yes\n"):printf("No\n");
	}
	return 0;
}

