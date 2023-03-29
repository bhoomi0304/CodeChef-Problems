#include <stdio.h>

int main(void) {
    int t,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&x,&y);   
        if((2*x)==(5*y))
            printf("Either\n");
        else if((2*x)>(5*y))
            printf("Chocolate\n");
        else
            printf("Candy\n");
    }

	return 0;
}

