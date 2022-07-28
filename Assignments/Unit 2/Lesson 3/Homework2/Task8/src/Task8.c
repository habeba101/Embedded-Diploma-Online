/*
 ============================================================================
 Name        : Task8.c
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
	float no1,no2,res;
	char op;
	printf("enter operator either + or -or * or divide");
	scanf("%c",&op);
	printf("enter two operands");
	scanf("%f %f",&no1,&no2);
	switch(op){
	case '+':
		res=no1+no2;
		break;
	case'-':
		res=abs(no1-no2);
		break;
	case'*':
		res=no1*no2;
		break;
	case'/':
		if(no1>0&&no2>0){
			res=no1/no2;

		}
		else {
			printf("one of operands=0");
		}
		break;
	default:
		printf("wrong operation");
		break;
	}

	printf("%f %c %f = %f",no1,op,no2,res);

}
