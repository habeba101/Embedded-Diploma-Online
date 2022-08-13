#include <stdio.h>

int main() {
    float a[2][2];
    float a2[2][2];
    float total[2][2];
    int i,j;
    printf("enter the elements of the 1st matrix \n");
    for (i = 0;  i<2 ; i++) {
        for (j = 0;  j<2 ; j++) {
            printf("enter a%d%d   ",i+1,j+1);
            scanf("%f", &a[i][j]);
        }
    }
    printf("enter the elements of the 2nd matrix \n");

    for (i = 0;  i<2 ; i++) {
        for (j = 0; j < 2; j++) {
            printf("enter b%d%d   ",i+1,j+1);
            scanf("%.2 f", &a2[i][j]);
        }
    }
        for (i = 0;  i<2 ; i++) {
            for (j = 0; j < 2; j++) {
                total[i][j] = a[i][j] + a2[i][j];
                printf("%f  ",total[i][j]);

            }
            printf("\n");
        }

    return 0;
}
