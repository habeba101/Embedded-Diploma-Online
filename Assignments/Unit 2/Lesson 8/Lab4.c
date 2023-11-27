#include <stdio.h>
int main()
{
    int arr[5];
    int *ptrarr = arr;
    int i;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = size - 1; i >= 0; i--)
    {
        printf("element - %d : %d ", i + 1, *(ptrarr + i));
        printf("\n");
    }
    return 0;
}