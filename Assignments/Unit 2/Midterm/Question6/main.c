#include <stdio.h>
int uniqueNumber(int arr[],int size);
int getArray(int getArr[]);
int main( )
{   int array[100];
    int arrSize= getArray(array);
    int uniqueVal= uniqueNumber(array,arrSize);
    printf("%d",uniqueVal);
    return 0;
}
int getArray(int getArr[]){
    int i=0;
    printf("to end enter 0");
    while(1){
        scanf("%d",&getArr[i]);
        if(getArr[i]==0)break;
        else i++;

    }
    return i-1;
}
int uniqueNumber(int arr[],int size){
    int i,uniqueNum;
    static int j=0;
    uniqueNum=arr[j];
    for(i=j+1;i<=size;i++){
        if(uniqueNum==arr[i]){
            arr[j]=0;
            arr[i]=0;
            j++;
            return uniqueNumber(arr,size);
        }
    }
    for(i=0;i<=size;i++)if(arr[i]!=0)return arr[i];
}