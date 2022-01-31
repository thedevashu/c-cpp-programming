#include<stdio.h>


// goto



int main(void)
{
    int i;
    for(i=0;i<=5;i++)
    {

        if(i==3)
            continue;
        printf(" %d ",i);
    }
    return 0;
}


/*
int main(void)
{
    int i;
    for(i=0;i<=5;i++)
    {

        if(i==3)
            break;
        printf(" %d ",i);
    }
    return 0;
}
*/
//i=0
//i=1
//i=2
//i=3
//=========================
//i=4
//i=5



