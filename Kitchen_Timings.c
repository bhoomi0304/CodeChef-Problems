#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int start,end;
	    scanf("%d%d",&start,&end);
	    printf("%d\n",end-start);
	}
    
	return 0;
}
