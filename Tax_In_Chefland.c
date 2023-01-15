#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	     int aa,bb;
       scanf("%d",&aa);
     if((aa==100)||(aa<100))
     printf("%d\n",aa);
     else
     printf("%d\n",(aa-10));
	}
	return 0;
}

