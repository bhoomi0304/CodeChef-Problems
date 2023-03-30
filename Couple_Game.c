#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int girls,boys;
	    scanf("%d%d",&girls,&boys);
	    printf("%d\n",boys-girls);
	}
	return 0;
}

