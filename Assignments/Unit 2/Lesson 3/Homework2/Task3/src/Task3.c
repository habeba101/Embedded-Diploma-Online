/*
 ============================================================================
 Name        : Task3.c
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

	float a,b,c;
	printf("enter three numbers");
	scanf("%f %f %f",&a,&b,&c);
	if(a>b&&a>c){
		printf("largest number is %f",a);
	}
	else if (b>c &&b >a){
		printf("largest number is %f",b);
	}
	else if(c>a&&c>b){
		printf("largest number is %f",c);
	}
}
