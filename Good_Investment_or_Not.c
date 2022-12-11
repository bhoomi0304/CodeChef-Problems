#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int interest,inflation;
	    scanf("%d%d",&interest,&inflation);
	    (interest>=2*inflation)?printf("YES\n"):printf("NO\n");
	}
    
	return 0;
}

