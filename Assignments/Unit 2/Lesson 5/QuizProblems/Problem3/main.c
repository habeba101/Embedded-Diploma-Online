#include <stdio.h>
void reverseArray(int arr[],int size);
int getArray(int array[]);
int main() {
    int numArr[100];
    int SizeArr= getArray(numArr);
    reverseArray(numArr,SizeArr);
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
void reverseArray(int arr[],int size){
    int j,i,revArray[100];
    for(i=0,j=size;i<=size,j>=0;j--,i++){
        revArray[i]=arr[j];
    }
    for (i=0;i<=size;i++){
        arr[i]=revArray[i];
    }
    for (i=0;i<=size;i++){
        printf("%d ",arr[i]);
    }
}