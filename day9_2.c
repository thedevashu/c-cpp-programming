#include<stdio.h>

struct Student
{
    int rollno;
    int marks;
    struct Date
    {
        int d;
        int m;
        int y;
    }dt;
}s;
int main(void)
{
    s.rollno=1;
    s.marks=90;
    s.dt.d=26;
    s.dt.m=7;
    s.dt.y=2021;
    printf("Rollno : %d Marks : %d",s.rollno,s.marks);
    printf("\n Date : %d- %d- %d",s.dt.d,s.dt.m,s.dt.y);
    return 0;
}
