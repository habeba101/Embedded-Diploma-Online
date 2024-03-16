/*
 ============================================================================
 Name        : Task4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main (){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float no;
	printf("enter a number");
	scanf("%f",&no);
	if(no>0){
		printf("%f is positive",no);
	}
	else if(no<0){
		printf("%f is negative",no);
	}
	else{
		printf("you entered zero.");
	}
}
