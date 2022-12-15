#include <stdio.h>

int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--){
	   int n;
	   scanf("%d",&n);
	   (n%2==0)?printf("Yes\n"):printf("No\n");
	}
    
	return 0;
}
