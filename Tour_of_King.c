#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int kin,fri;
	    scanf("%d%d",&kin,&fri);
	    printf("%d\n",((5*kin)+(7*fri)));
	}
    
	return 0;
}

