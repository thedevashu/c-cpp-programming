#include<stdio.h>
int fact_number();


int fact_number(int num);

int main(void)
{
    int num;
    int res;
    printf("Enter Number :");
    scanf("%d",&num);
    res=fact_number(num);
    printf("\n Factorial of number = %d",res);
    return 0;

}

int fact_number(int num)
{
    if(num==1)
        return 1;
    else
        return num*fact_number(num-1);
}
