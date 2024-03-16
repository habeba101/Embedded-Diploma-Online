#include <stdio.h>
struct Sdistance{
    double pointInFeet1;
    double pointInFeet2;
    double pointInInch1;
    double pointInInch2;

}dis;
int main() {

    printf("Enter Information for 1st distance\n");
    printf("enter feet: ");
    scanf("%lf",&dis.pointInFeet1);
    printf("enter Inch: ");
    scanf("%lf",&dis.pointInInch1);
    printf("Enter Information for 2nd distance \n");
    printf("enter feet: ");
    scanf("%lf",&dis.pointInFeet2);
    printf("enter Inch: ");
    scanf("%lf",&dis.pointInInch2);
    double sumInFeet,sumInInch;
    int convert;
    sumInInch=dis.pointInInch1+dis.pointInInch2;
    convert=sumInInch/12;
    sumInFeet=dis.pointInFeet1+dis.pointInFeet2+convert;

    printf("%lf",sumInInch/12);
    sumInInch=(sumInInch/12)-convert;
    printf("sum of distances = %0.2f %0.2f ",sumInFeet,sumInInch);
    return 0;
}
