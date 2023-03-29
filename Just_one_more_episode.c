#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int a;
	    scanf("%d",&a);
	    if(a>24){
	        printf("\nYes");
	    }
	    else
	    {
	        printf("\nNo");
	    }
	}
	return 0;
}
