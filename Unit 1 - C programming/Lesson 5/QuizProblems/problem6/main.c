#include <stdio.h>
int binaryNumValue(int num);
int main() {
    int no;
    printf("enter number");
    scanf("%d",&no);
    int result=binaryNumValue(no);
    printf("result is%d",result);
    return 0;
}
int binaryNumValue(int num){
char valueChar;
valueChar=(char)num;

int i;
for(i=0;i<=7;i++){
    if(i==3)continue;
    else valueChar&=~(1<<i);
}
    if(valueChar==8)return 1;
    else return 0;
}