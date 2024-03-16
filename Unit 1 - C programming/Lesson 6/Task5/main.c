#include <stdio.h>
struct circle{
    float radius;
    float pi;
    float area;
}cir;
int main() {

    printf("enter radius");
    scanf("%f",&cir.radius);

    cir.pi=3.14;
    cir.area=cir.pi*cir.radius*cir.radius;
    printf("area of circle is %0.2f",cir.area);
    return 0;
}
