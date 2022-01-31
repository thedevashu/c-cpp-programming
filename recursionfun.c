#include<stdio.h>

int main()
{
    int n,res;
    printf("Enter n value");
    scanf("%d",&n);
    res=fact(n);
    printf("%d",res);
}
int fact (int n)
{
    int rs;
    if(n==0)
    {
        rs=1;
    }
    else
    {
        rs = n*fact(n-1);
    }
    return rs;
}
