#include<stdio.h>
union Employee
{
    int id;
    char grade;
};
int main()
{
    union Employee e;
    e.id = 1;
    e.grade = 'A';
    printf("id : %d grade : %c ",e.id,e.grade);
}
