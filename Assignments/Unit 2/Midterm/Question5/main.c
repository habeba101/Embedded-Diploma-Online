#include <stdio.h>
int countOnes(int num);
int main() {
    int value;
    scanf("%d",&value);
    int result= countOnes(value);
    printf("%d",result);
    return 0;
}
int countOnes(int num) {
    int count=0;
    while(1){
        if(num%2!=0)
        count++;
        num=num/2;
        if(num==1){
            count++;
            break;
        }
    }
    return count;
}