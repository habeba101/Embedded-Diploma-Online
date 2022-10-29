#include <stdio.h>
int sumLoop(int val);
int main() {
    int result= sumLoop(100);
    printf("%d",result);
    return 0;
}
int sumLoop(int val){
    int sum=val;
    if(val>0)return sum+sumLoop(val-1);
    else return sum;
}