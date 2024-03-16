#include <stdio.h>
#include <string.h>
void checkUserName(char UserName[],char arr[],int size);
int main() {
    int size;
    char arrayUser[10]="habeba";
    char arrUser[10];
    printf("Enter UserName");
    gets(arrUser);
    size= strlen(arrUser);
    checkUserName(arrayUser,arrUser,size);
    return 0;
}
void checkUserName(char UserName[],char arr[],int size){
    int i,flag;
    for(i=0;i<size;i++){
        if(UserName[i]==arr[i]) flag=1;
        else{
        flag=0;
        break;}
    }
if(flag)printf("correct username");
else printf("wrong username");
}