

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int x;
	printf("enter an integer");
	scanf("%d",&x);
	printf("you entered %d",x);
}
