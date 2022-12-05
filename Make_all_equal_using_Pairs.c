#include <stdio.h>

int main(void) {
	int t ;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    
	    int A[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&A[i]);
	        
	        
	    }
	    int max = -99999;
	    for(int i=0;i<n;i++){
	        int count =0 ;
	        for(int j=0;j<n;j++){
	            if(A[i]==A[j]){
	                count++;
	                
	            }
	        }
	        if(count > max){
	            max  = count ;
	            
	        }
	        
	    }
	    if(max!=0){
	         printf("%d\n",n-max);
	         
	    }
	    else{
	        printf("%d\n",n-1);
	    }
	   
	}
	return 0;
}
