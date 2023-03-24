#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int x,y;
        scanf("%d%d",&x,&y);
        if(x>=y)
            printf("\nYES");
        else
            printf("\nNO");
	}
	return 0;
}

