

#include <stdio.h>
#include <stdlib.h>

void main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char c;
	printf("Enter a character:");
	scanf("%c",&c);
	printf("ASCII value of %c = %d",c,c);
}
