#include <stdio.h>
int array[100];
void reverseArray(int arr[],int size);
int getArray(int getArr[]);
int main() {
    int arrSize= getArray(array);
    reverseArray(array,arrSize);
    return 0;
}
int getArray(int getArr[]){
    int i;
    printf("to end enter 0");
    while(1){
        scanf("%d",&getArr[i]);
        if(getArr[i]==0)break;
        else i++;

    }
    return i;
}
void reverseArray(int arr[],int size){
    int i,j,rev[100];
    for(i=0,j=size-1;i<size,j>=0;i++,j--){
        rev[i]=arr[j];
    }
    for(i=0;i<size;i++){
        arr[i]=rev[i];
        printf("%d ",arr[i]);
    }
}