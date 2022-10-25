#include <stdio.h>
#include <string.h>
void reverseString(char arr[],int size);
int main() {
    int i;
    char arrStr[100];

    printf("enter a sentence ");
    gets(arrStr);
    i=strlen(arrStr)-1;
    reverseString(arrStr,i);

    return 0;
}
void reverseString(char arr[],int size){
    printf("%c",arr[size]);
    size--;
    if(size>=0)reverseString(arr, size);
}