#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	   int c;
	   scanf("%d",&c);
	   (c>20)?printf("HOT\n"):printf("COLD\n");
	}
	return 0;
}
