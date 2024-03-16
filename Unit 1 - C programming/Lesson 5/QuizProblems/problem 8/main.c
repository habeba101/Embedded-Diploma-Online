#include <stdio.h>
int arrNum[100];
int lastOccurrence(int arr[],int size,int value);
int getArray(int array[]);
int main() {
    int search,result;
    int arrSize= getArray(arrNum);
    printf("enter the value");
    scanf("%d",&search);
    result=lastOccurrence(arrNum,arrSize,search);
    printf("the result is %d",result);
    return 0;
}
int getArray(int array[]){
    int i=0;
    printf("enter Array press 0 to end");
    while (1){
        scanf("%d",&array[i]);
        if(array[i]!=0){i++; continue;
        }
        else break;
    }
    return i-1;
}
int lastOccurrence(int arr[],int size,int value){
    int j,res=-1;
    for (j=0;j<=size;j++){
        if((arr[j]==value)&&(j>res))
            res=j;
    }
    return res;
}