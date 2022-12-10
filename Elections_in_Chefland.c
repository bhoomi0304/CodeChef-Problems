
#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int a,b,c;
	    scanf("%d%d%d",&a,&b,&c);
	    if(a>b && a>c){
	        if(a>50){
	            printf("A\n");
	        }
	        else{
	            printf("NOTA\n");
	        }
	    }
	    else if(b>a && b>c){
	        if(b>50){
	            printf("B\n");
	        }
	        else{
	            printf("NOTA\n");
	        }
	    }
	    else if(c>a && c>b){
	        if(a>50){
	            printf("C\n");
	        }
	        else{
	            printf("NOTA\n");
	        }
	    }
	    else{
	            printf("NOTA\n");
	        }
	}
    
	return 0;
}

