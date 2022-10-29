#include <stdio.h>
void isPrime(int num1,int num2);
int main() {
    int n01,n02;
    scanf("%d%d",&n01,&n02);
    printf("prime number is");
    isPrime(n01,n02);
    return 0;
}
void isPrime(int num1,int num2) {
    int i, j, flag = 0;
    for (i = num1; i <= num2; i++) {
            flag=0;
        for (j = 2; j <= (i / 2); j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag==0)printf("%d ", i);
    }
}