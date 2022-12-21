#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int level;
	    scanf("%d",&level);
	    (level>=7)?printf("HOT\n"):(level>=4 && level<7)?printf("MEDIUM\n"):printf("MILD\n");
	}
    
	return 0;
}
