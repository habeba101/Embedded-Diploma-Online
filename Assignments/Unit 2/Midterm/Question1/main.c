#include <stdio.h>
int sumDigit(int num);
int main() {
    int value;
    scanf("%d",&value);
    int result= sumDigit(value);
    printf("%d",result);
    return 0;
}
int sumDigit(int num){
    int val;
    static int sum=0;
    if(num!=0){
        val=num%10;
        sum+=val;
        sumDigit(num/10);
    }
    else return 0;
    return sum;
}