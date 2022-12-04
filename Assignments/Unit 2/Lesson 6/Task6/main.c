#include <stdio.h>
union job {
    char name[32];
    float salary;
    int worker_no
}u;
struct job1 {
    char name[32];
    float salary;
    int worker_no
}s;
int main() {
    printf("%d \n %d",sizeof(u),sizeof(s));
    return 0;
}
