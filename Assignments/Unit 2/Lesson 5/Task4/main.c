#include <stdio.h>
int PowerNum(int base,int pow);
int main() {
    int x,y,result;
    printf("enter base number");
    scanf("%d",&x);
    printf("enter the power  number (postive number)");
    scanf("%d",&y);
    result= PowerNum(x,y);
    printf("%d ^ %d = %d",x,y,result);
    return 0;
}
int PowerNum(int base,int pow){
    int i,mul=1;
    for(i=0;i<pow;i++) mul*=base;
    return mul;
}