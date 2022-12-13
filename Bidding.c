#include <stdio.h>

int main(void) {
    // your code goes here
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a>b&&a>c){
            printf("\nAlice");
        }
        else if(b>a&&b>c){
            printf("\nBob");}
            else
            printf("\nCharlie"); } 

	return 0;
}
