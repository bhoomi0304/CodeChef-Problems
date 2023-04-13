#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int seats,students;
	    scanf("%d%d",&seats,&students);
	    (seats<students)?printf("%d\n",students-seats):printf("0\n");
	}
	return 0;
}

