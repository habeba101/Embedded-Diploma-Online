#include <stdio.h>
#include <string.h>
int main() {
    int i,j;
    char str[100],rev[100];
    printf("enter the string");
    gets(str);
    for (i = strlen(str)-1,j=0;i>=0 ,j< strlen(str); i--,j++) {
        rev[j]=str[i];
    }
    printf("Reverse string is %s",rev);
    return 0;
}
