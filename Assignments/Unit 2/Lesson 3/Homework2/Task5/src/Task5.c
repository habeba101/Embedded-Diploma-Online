/*
 ============================================================================
 Name        : Task5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char chr;
	printf("enter a character");
	scanf("%c",&chr);
	if(chr>=65&& chr<=90){
		printf("%c is an alphabet",chr);
	}
	else if(chr>=97&& chr<=122){
		printf("%c is an alphabet",chr);
	}
	else{
		printf("%c is not an alphabet ",chr);
	}
}
