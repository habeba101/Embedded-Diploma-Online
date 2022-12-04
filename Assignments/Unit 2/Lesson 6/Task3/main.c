#include <stdio.h>
struct ScomplexReal{
    double real1;
    double real2;
    double complex1;
    double complex2;

}complexReal;
int main() {
    printf("enter real and img ");
    scanf("%lf",&complexReal.real1);
    scanf("%lf",&complexReal.complex1);

    printf("enter real and img ");
    scanf("%lf",&complexReal.real2);
    scanf("%lf",&complexReal.complex2);
    double sumReal=complexReal.real1+complexReal.real2;
    double sumimg=complexReal.complex1+complexReal.complex2;
    printf("sum = %0.2f + %0.2f i",sumReal,sumimg);
    return 0;
}
