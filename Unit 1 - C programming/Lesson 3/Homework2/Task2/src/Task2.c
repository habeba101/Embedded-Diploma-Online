

#include <stdio.h>
#include <stdlib.h>

void main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char c;
	printf("enter an alphabet");
	scanf("%c",&c);
	switch(c){
	case 'u':
	case 'i':
	case 'o':
	case 'e':
	case 'a':
		printf("%c is a vowel",c);
		break;
	default:
		printf("%c is a constant",c);
		break;
	}
}

