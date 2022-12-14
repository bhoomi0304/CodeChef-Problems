#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int gauge;
	    scanf("%d",&gauge);
	    if(gauge<3)
	        printf("Light\n");
	    else if(gauge <7 && gauge>=3)
	        printf("Moderate\n");
	   else
	        printf("Heavy\n");
	}
    
	return 0;
}

