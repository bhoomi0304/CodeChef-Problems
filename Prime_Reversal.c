#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int x;
	    scanf("%d",&x);
	    char s[x],s1[x];
	    scanf("%s\n%s",s,s1);
	    int a,b;
	    a=b=0;
	    for(int i=0; i<x; i++){
	        if(s[i]=='1') 
	            a++;
	        if(s1[i]=='1') 
	            b++;
	    }
	    if(a==b)
	        printf("YES\n");
	   else
	        printf("NO\n");
	}
    
	return 0;
}
