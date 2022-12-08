#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int cost_price,sell_price;
	    scanf("%d%d",&cost_price,&sell_price);
	    (cost_price==sell_price)?printf("NEUTRAL\n"):(cost_price>sell_price)?printf("LOSS\n"):printf("PROFIT\n");
	}
    
	return 0;
}

