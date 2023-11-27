#include <stdio.h>
int main()
{
    int m = 29;
    int *ab = &m;

    printf("Address of m %x \n", &m);
    printf("Value of m %d \n", m);
    *ab = 34;

    printf("Address of pointer ab %x \n", ab);
    printf("Content of pointer ab %d \n", *ab);
    *ab = 7;

    printf("Address of pointer ab %x \n", ab);
    printf("Content of pointer ab %d \n", *ab);
    return 0;
}