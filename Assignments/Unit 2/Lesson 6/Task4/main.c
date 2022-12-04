#include <stdio.h>
struct Sstudent{
    char name [50];
    int roll;
    int mark;
};
int main() {
    int i;
    struct Sstudent students[10];
    printf("enter information of students\n");
    for(i=0;i<10;i++){
        printf("enter roll number");
        scanf("%d",&students[i].roll);
        printf("enter name");
        scanf("%s",&students[i].name);
        printf("enter marks");
        scanf("%d",&students[i].mark);
    }
    for(i=0;i<10;i++){
        printf("name %s \n",students[i].name);
        printf("mark %d \n",students[i].mark);
        printf("roll %d \n",students[i].roll);
    }
    return 0;
}
