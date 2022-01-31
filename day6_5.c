#include<stdio.h>
void sum_of_function();
int main()
{
    sum_of_function();
}
void sum_of_function()
{
    printf("Inside function\n");
    int a,b;
    scanf(" %d\t %d",&a,&b);
    printf("%d",a+b);

}
