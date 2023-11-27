#include <stdio.h>
#include <string.h>
int main()
{
    char arr[26] = {"w3resource"};
    char *ptrarr = arr;
    int i;
    for (i = strlen(arr); i >= 0; i--)
    {
        printf("%c", *(ptrarr + i));
    }
    return 0;
}