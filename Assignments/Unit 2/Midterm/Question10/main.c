#include <stdio.h>
int arrCount[10];
int countOnesInBetweenZeros(int num);
int main() {
    int n01;
    scanf("%d",&n01);
    int result= countOnesInBetweenZeros(n01);
    printf("%d",result);
    return 0;
}
int countOnesInBetweenZeros(int num){
    int count=0,j;
    static int i=0;
            while(num){
                count+=num&1;
                num>>=1;
                if(!(num&1)) {
                    arrCount[i]=count;
                    i++;
                    break;
                }
            }

        if(num==0&& i>1){
        for(j=0;j<i;j++){
            if(arrCount[j]>=arrCount[j+1]&&j+1<i)return arrCount[j];
            }
        }
        else if(num==0 && i==1) return count;
        else return countOnesInBetweenZeros(num);
}