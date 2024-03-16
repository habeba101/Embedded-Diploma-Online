#include <stdio.h>

int main() {
    int i,n,val,arr[100];
    printf("enter no of elements");
    scanf("%d",&n);
    for (i = 0;  i<n ; i++) {
        scanf("%d",&arr[i]);

    }
    printf("enter the elements to be searched ");
    scanf("%d",&val);
    for (i = 0;i<n ;i++) {
        if(val==arr[i]){
            printf("number found at the location %d",i+1);
            break;
        }
    }

    return 0;
}
