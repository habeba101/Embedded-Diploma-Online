#include <stdio.h>
#include <math.h>
float squareRoot(int num);
int main() {
    int value;
    scanf("%d",&value);
    float result= squareRoot(value);
    printf("%0.3f", ((int)(result*1000))/1000.0

    );
    return 0;
}
float squareRoot(int num){
    float i;

    for(i=0;i<num;i+=0.0001){
        if( floor(i*i)==num)return i;
        else continue;
    }
}