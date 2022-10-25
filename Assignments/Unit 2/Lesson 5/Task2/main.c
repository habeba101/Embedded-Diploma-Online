#include <stdio.h>
int factorial(int num);
int main() {
    int x,result;
    printf("enter a positive number");
    scanf("%d",&x);
    printf("factorial of %d : ",x);
   result= factorial(x);
    printf("%d",result);
    return 0;

}
int factorial(int num){
    if(num==0||num==1)return 1;
    else return num* factorial(num-1);
}