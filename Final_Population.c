#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int x,y,z;
	    scanf("%d%d%d",&x,&y,&z);
	    printf("%d\n",x-y+z);
	}
	return 0;
}

