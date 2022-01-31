#include<stdio.h>
struct student
{
    char name[20];
    int rn:4;
    int mark:5;
}stu;

int main()
{
    printf("%d",sizeof(stu));
}
