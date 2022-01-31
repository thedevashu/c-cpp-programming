#include<stdio.h>
int main()
{
    int a=10,b=3,c=0,d;
    printf("Value of a : %d b: %d c : %d",a,b,c);
    d=a++||(++b && c++);
    printf("\n d : %d a : %d b : %d c : %d",d,a,b,c);
}
