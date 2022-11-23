#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int r1,r2,r3;
	    scanf("%d%d%d",&r1,&r2,&r3);
	    if(r1>r2 && r1>r3){
	        if(r1>(r2+r3))
	            printf("Yes\n");
	        else
	            printf("No\n");
	    }
	    else if(r2>r3 && r2>r1){
	        if(r2>(r1+r3))
	            printf("Yes\n");
	        else
	            printf("No\n");
	    }
	    else{
	        if(r3>(r1+r2))
	            printf("Yes\n");
	        else
	            printf("No\n");
	    }
	}
    
	return 0;
}

