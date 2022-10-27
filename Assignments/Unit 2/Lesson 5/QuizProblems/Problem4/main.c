#include <stdio.h>
#include "string.h"
int getArray(char array[]);
void asciiToInt(char asciiArr[],int size);
unsigned int arrayNum[100];
char arrString[100];
int main() {
    int arrSize=getArray(arrString);
    asciiToInt(arrString,arrSize);

    return 0;
}
int getArray(char array[]){

    printf("enter Array ");
    gets(array);
        return strlen(array);
}
    void asciiToInt(char asciiArr[],int size){
        int j,x;
        for(j=0;j<size;j++){
        for(x=0x30;x<=0x39;x++){
            if(asciiArr[j]==x)arrayNum[j]=asciiArr[j]%0x30;
        }
        }
        for (j=0;j<size;j++)printf("%d ",arrayNum[j]);
}
