#include <stdio.h>
#include<math.h>
int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int a,b,c,d,k;
	    scanf("%d%d%d%d%d",&a,&b,&c,&d,&k);
    	int x=abs(a-c)+abs(b-d);
        if(x>k)
        {
            printf("NO\n");
        }
        else if(x==k)
            printf("YES\n");
        else if((k-x)%2==0)
            printf("YES\n");
        else
            printf("NO\n");
	            
	}
    
	return 0;
}

