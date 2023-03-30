#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int num,even,odd,sum=0;
	    scanf("%d%d%d",&num,&even,&odd);
	    for(int i=1;i<=num;i++){
	        if(i%2==0){
	            sum+=even;
	        }
	        else{
	            sum+=odd;
	        }
	    }
	    printf("%d\n",sum);
	}
	return 0;
}

