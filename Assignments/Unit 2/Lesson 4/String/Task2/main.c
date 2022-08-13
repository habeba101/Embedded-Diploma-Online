#include <stdio.h>

int main() {
    int i,count=0;
    char str[100];
    printf("enter a string");
    gets(str);
    for (i = 0;  i<100 ; i++) {
        if(str[i]==0) break;
        count++;

    }

    printf("length of string %d ",count);
    return 0;
}
