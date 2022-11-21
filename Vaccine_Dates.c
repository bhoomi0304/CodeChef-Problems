#include <stdio.h>

int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int dose,early,late;
	    scanf("%d%d%d",&dose,&early,&late);
	    (dose>=early && dose<=late)?printf("Take second dose now\n"):(dose<early)?printf("Too Early\n"):printf("Too Late\n");
	}
	return 0;
}

