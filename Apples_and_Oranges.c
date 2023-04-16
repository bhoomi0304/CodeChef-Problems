#include <stdio.h>

int main(void) {
	// your code goes here
	//int tc;
	//scanf("%d",&tc);
	//while(tc--){
	    int x,y,z;
	    scanf("%d",&x);
	    scanf("%d %d",&y, &z);
	    if((y+z)<= x){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	//}
	return 0;
}

