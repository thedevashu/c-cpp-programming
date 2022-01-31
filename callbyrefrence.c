#include<stdio.h>
void main()
{


 int a=10,b=20;
    printf("Befor swap :\t %d \t%d\n",a,b);
    swap(&a,&b);
    printf("after swap :\t %d \t%d",a,b);
}

void swap (int* x,int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("after swap :\t %d \t%d",x,y);
}
