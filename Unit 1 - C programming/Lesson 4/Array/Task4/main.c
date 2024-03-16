#include <stdio.h>

int main() {
    int i,n,pos,val,arr[100];
    printf("enter no of elements");
    scanf("%d",&n);
    for (i = 0;  i<n ; i++) {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be inserted");
    scanf("%d",&val);
    printf("enter the location");
    scanf("%d",&pos);
    for ( i=n;  i>=pos-1 ;i--) {
        arr[i+1]=arr[i];
        if(i==pos-1)
            arr[i]=val;
    }
    for (i = 0;  i<n+1 ; i++) {
        printf("%d ",arr[i]);
    }


    return 0;
}
