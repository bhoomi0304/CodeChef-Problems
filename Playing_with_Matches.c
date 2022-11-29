#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int a,b;
	    scanf("%d%d",&a,&b);
	    int arr[10]={6,2,5,5,4,5,6,3,7,6};
	    int sum=a+b;
	    int total=0,rem=0;
	    while(sum!=0){
	        rem=sum%10;
	        total+=arr[rem];
	        sum/=10;
	    }
	    printf("%d\n",total);
	}
    
	return 0;
}

