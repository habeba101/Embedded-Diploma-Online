

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int x,y;
	printf("Enter two integers");
	scanf("%d  %d",&x ,&y);
	printf("sum %d", x+y);
}
