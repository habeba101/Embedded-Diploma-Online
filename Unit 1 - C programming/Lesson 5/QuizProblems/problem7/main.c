#include <stdio.h>
int isPowerThree(int num);
int main() {
    int no ,result;
    printf("enter number");
    scanf("%d",&no);
    result= isPowerThree(no);
    printf("the result is %d",result);
    return 0;
}
int isPowerThree(int num){
    if(num==1) return 0;
    else if((num%=3)==0)return 0;
    else return 1;
}