#include <stdio.h>
int clearBit(int value,int pos);
int main() {
    int num,position;
    printf("enter number ");
    scanf("%d",&num);
    printf("enter bit position");
    scanf("%d",&position);

    int result=clearBit(num,position);
    printf("result is %d",result);
    return 0;
}
int clearBit(int value,int pos ){
    int clear =value;
    if((clear&=~(1<<pos))>0) return clear;
    else return value;
}