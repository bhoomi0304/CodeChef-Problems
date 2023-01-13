#include <stdio.h>

int main(void) {
	// your code goes here
	int m,x[100],a;
	scanf("%d",&m);
	for(a=0;a<m;a++)
	{
	    scanf("%d",&x[a]);
	    
	}
	int cc=0,c=0;
	for(a=0;a<m;a++)
	{
	    if(x[a]%2==0)
	    cc++;
	    else
	    c++;
	}
	if(cc>c)
	printf("READY FOR BATTLE");
	else
	printf("NOT READY");
	return 0;
}

