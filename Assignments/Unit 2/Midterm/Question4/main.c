#include <stdio.h>

void reverseDigits(int num);

int main() {
    int value;
    scanf("%d",&value);
    reverseDigits(value);
    return 0;
}
void reverseDigits(int num){
    int i;
    for(i=0;num!=0;i++) {
        printf("%d",num % 10);
        num /= 10;
    }
}