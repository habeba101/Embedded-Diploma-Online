#include <stdio.h>

int main() {
    float no[100],avg,sum=0;
    int i,n=0;
    printf("enter the numbers of data");
    scanf("%d",&n);
    for (i =0;  i<n ; i++) {
        printf("enter number");
        scanf("%f",&no[i]);

        sum+=no[i];
    }
    avg=sum/(float) n;
    printf("%.2f",avg);

    return 0;
}
