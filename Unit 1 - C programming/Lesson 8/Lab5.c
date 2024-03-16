

// int main()
// {
//     int i = 0;
//     struct emp *arrptr[5] = {{"Alex", 1002},
//                              {"Alx", 1003},
//                              {"Ale", 1004},
//                              {"Alexa", 1005},
//                              {"Alex", 1006}};

//     struct emp *ptrarr[5] = arrptr;

//     return 0;
// }

#include <stdio.h>
#include <string.h>
struct emp
{
    char name[50];
    int id;
};

int main()
{
    int i;
    int arraySize = 3;

    // Declare an array of structures
    struct emp structArray[3];

    // Declare a pointer to the array of structures
    struct emp *ptrToArray = structArray;

    // Initialize and print data through the pointer to the array
    for (i = 0; i < arraySize; i++)
    {
        ptrToArray->id = i + 1000;
        ptrToArray++;
    }
    ptrToArray = structArray;

    strcpy(ptrToArray->name, "habeba");
    ptrToArray++;
    strcpy(ptrToArray->name, "Ahmed");
    ptrToArray++;
    strcpy(ptrToArray->name, "Alex");
    ptrToArray = structArray;

    for (i = 0; i < arraySize; i++)
    {

        printf(" %d: %d\n", i, ptrToArray->id);
        printf(" %d: %s\n", i, ptrToArray->name);
        ptrToArray++;
    }

    return 0;
}
