#include<stdio.h>

int main()
{
   long long int n1= 12345678999;
    float f;
    char ch;
    double dd;
    printf("n1=%d size of n1 is %d\t%d\t%d\t%d",n1,sizeof(n1),sizeof(f),
           sizeof(ch),sizeof(dd));
           printf("\n Size of C is%d",sizeof('C'));
    return 0;
}

/*
int main()
{
    int num1=420,num2=96,num3=69;
    float fval =23.69;
    char ch='j';
    printf("helo %d \t%d \t%d \t %f \t %c",num1,num2,num3,fval,ch);
    return 0;
}
*/

