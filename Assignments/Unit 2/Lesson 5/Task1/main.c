#include <stdio.h>
void primeNum(int num1,int num2);
int main() {
    int x,y;
    printf("Enter two numbers interval");
    scanf("%d%d",&x,&y);
    printf("Prime numbers between %d and %d are : ",x,y);
    primeNum(x,y);
    return 0;
}
void primeNum(int num1,int num2){
    int i,j,flag=0;

     for(i=num1;i<=num2;i++){
         for(j=2;j<=i/2;j++){
             if(i%j==0) {flag=0; break;}
             else flag=1;
         }
         if(flag) printf("%d ",i);
     }
}