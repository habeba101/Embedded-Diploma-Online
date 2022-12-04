#include <stdio.h>
struct Sstudent{
char name[50];
int roll;
float mark;
};
int main() {
    struct Sstudent student;
    printf("enter information of students\n");
    printf("Enter name");
    scanf("%s",&student.name);
    printf("Enter roll number");
    scanf("%d",&student.roll);
    printf("Enter Marks");
    scanf("%f",&student.mark);
    printf("Displaying Information");
    printf("name %s \n",student.name);
    printf("roll %d \n",student.roll);
    printf("Marks %0.2f \n",student.mark);
    return 0;
}
