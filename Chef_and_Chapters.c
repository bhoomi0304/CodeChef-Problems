#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int a,b,c;
	    scanf("%d%d%d",&a,&b,&c);
	    printf("%d\n",c*b*a);
	}
	return 0;
}

