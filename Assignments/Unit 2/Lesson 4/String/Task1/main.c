#include <stdio.h>
#include <string.h>
int main() {
    char str[100],fre;
    int count=0,i;
    printf("enter a string");
    gets(str);
    printf("enter a character to find frequncy");
    scanf("%c",&fre);
    for (i = 0;  i< strlen(str) ; i++) {
        if(str[i]==fre)
            count++;
    }
    printf("frequncy of %c = %d",fre,count);
    return 0;
}
