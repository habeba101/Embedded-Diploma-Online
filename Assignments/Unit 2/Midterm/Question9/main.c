#include <stdio.h>
#include <string.h>
char arr[100];
void reverseArr(char revArr[],int size);
int getArray(int getArr[]);
int main() {
    int arrSize= getArray(arr);

    reverseArr(arr,arrSize);

    return 0;
}
int getArray(int getArr[]){

    printf("enter array");
    gets(getArr);
    return strlen(getArr)-1;
}
void reverseArr(char revArr[],int size){
    int i,j;
    for(i=0;i<=size;i++){

        if(revArr[i]==32&&i>0){
            for(j=i+1;j<=size;j++){
                printf("%c",revArr[j]);
            }
            printf(" ");
            for(j=0;j<i+1;j++){
                printf("%c",revArr[j]);
            }
            break;
        }
    }
}