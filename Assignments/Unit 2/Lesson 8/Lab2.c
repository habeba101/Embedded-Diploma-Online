#include <stdio.h>
int main()
{
    char arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char *ptrarr = arr;
    int i;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < size; i++)
    {
        printf(" %c ", *(ptrarr + i));
    }
    return 0;
}