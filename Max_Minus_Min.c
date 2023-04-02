#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
	// your code goes here
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	printf("%d\n",(z-x));
    }
	return 0;
}
