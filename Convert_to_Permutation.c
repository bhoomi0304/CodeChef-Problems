#include <stdio.h>
#include <stdlib.h>

int compare(const void *x_void, const void *y_void)
{
    int xxx = *(int *)x_void;
    int yyy = *(int *)y_void;
    return xxx-yyy;
}

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int nc,p,temp,sum;
	    scanf("%d",&nc);
	    int a[nc];
	    p=nc;
	    temp=sum=0;
	    for(int i=0;i<nc;i++){
	        scanf("%d",&a[i]);
	    }
	    qsort(a, nc, sizeof(int), compare);
	    for(int i=nc-1; i>=0; i--){
	        if(a[i]<=p){
	            sum+=p-a[i];
	            p--;
	        }
	        else{
	            temp=1;
	            break;
	        }
	    }
	    if(!temp)
	        printf("%d\n",sum);
	    else
	        printf("-1\n");
	}
    
	return 0;
}

