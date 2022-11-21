#include <stdio.h>

int main(void) {
	int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int assests,billions,rem;
        scanf("%d%d%d",&assests,&billions,&rem);
        printf("%d\n",(billions-assests)/rem);
    }
	return 0;
}

