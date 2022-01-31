#include<stdio.h>
#include<conio.h>

int main()
{
    int x;
    x=5>4>3;
    printf("%d",x);
    return 0;
    /* 5>4 = 1(true)
        therefor 5>4>3 becomes 1>3 which is 0(false)
        so 5>4>3 = 0
    */

}
