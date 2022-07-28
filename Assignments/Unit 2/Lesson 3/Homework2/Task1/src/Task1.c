
#include <stdio.h>
#include <stdlib.h>

void main(){

	setvbuf(stdout, NULL, _IONBF, 0);

	setvbuf(stderr, NULL, _IONBF, 0);
	int x=0;
	printf("enter an integer you want to check");
	scanf("%d",&x);
	if(x%2==0){
		printf("%d is even",x);

	}
	else{
		printf("%d is odd",x);
	}


}

