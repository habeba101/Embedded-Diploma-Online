/*
 ============================================================================
 Name        : Task7.c
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
	int n,i,factorial=1;
	printf("Enter an integer ");
	scanf("%d",&n);
	if(n<=0){
		printf("Error!!! Factorial of negative number doesnot exist");

	}
	else if(n==0){
		printf("Factorial = 1");

	}
	else{
		for (i=1;i<=n;i++){
			factorial*=i;
		}
		printf("Factorial = %d",factorial);
	}

}
