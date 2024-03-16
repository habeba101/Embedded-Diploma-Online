#include <stdio.h>

int main() {
    int i,j,rows,col;
    int arr[100][100],tra[100][100];
    printf("enter rows and columns of matrix");
    scanf("%d%d",&rows,&col);
    printf("enter elements of matrix \n");
    for(i=0;i<rows;i++){
        for (j = 0;  j<col ; j++) {
            printf("enter elements a%d%d",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("entered matrix \n");
    for(i=0;i<rows;i++){
        for (j = 0;  j<col ; j++) {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix \n");

    for(i=0;i<col;i++){
        for (j = 0;  j<rows ; j++) {
            tra[i][j]=arr[j][i];
            printf("%d  ",tra[i][j]);
        }
        printf("\n");
    }

    return 0;
}
