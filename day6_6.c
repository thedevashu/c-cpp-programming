#include<stdio.h>
int sum();
int main(void)
{
    sum(23,23);
    sum(34,45);
}
int sum(int a, int b)
{
    printf("Addition is %d\t\t\t",a+b);
}
