#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int x,y;
	    scanf("%d%d",&x,&y);
	    printf("%d\n",(10*x+(90*y)));
	}
    
	return 0;
}
