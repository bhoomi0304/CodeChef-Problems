#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int first,third;
	    scanf("%d%d",&first,&third);
	    if((first+third)%2==0)
	        printf("%d\n",(first+third)/2);
	   else
	        printf("-1\n");
	}
    
	return 0;
}

