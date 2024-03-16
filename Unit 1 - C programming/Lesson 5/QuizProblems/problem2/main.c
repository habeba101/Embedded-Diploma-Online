#include <stdio.h>
int array1[100],array2[100];
int getArray(int array[]);
void swapArr(int arrOne[],int arrTwo[],int sizeOne,int sizeTwo);
int main() {
    int size1,size2;
    size1=getArray(array1);
    size2=getArray(array2);
    printf("%d %d\n",size1,size2);

    swapArr(array1,array2,size1,size2);
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
    return i;
}
void swapArr(int arrOne[],int arrTwo[],int sizeOne,int sizeTwo){
    int j,swap[100];
    for(j=0;j<sizeOne;j++){
        swap[j]=arrOne[j];
    }
    for(j=0;j<sizeTwo;j++){
        arrOne[j]=arrTwo[j];
    }
    for(j=0;j<sizeOne;j++){
        arrTwo[j]=swap[j];
    }
    for(j=0;j<sizeTwo;j++){
        printf("%d ",arrOne[j]);
    }
    printf("\n");
    for(j=0;j<sizeOne;j++){
        printf("%d ",arrTwo[j]);
    }
}