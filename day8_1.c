#include<stdio.h>
int main()
{
    int a[5];
    int i;
    for(i = 0; i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0; i<5;i++)
    printf("%d ,", a[i]);
    printf("base add %d\t",&a[0]);
    printf("%d\t",*a+1);

}
