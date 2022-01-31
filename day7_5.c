#include<stdio.h>

int main(void)
{
    int num=14; // 1110
    char ch='a';
    void *vptr=NULL; // void pointer
    //void *vptr ; //generic pointer
    vptr=&num;
    printf("vptr : %u &num : %u",vptr,&num);
    printf("\n num : %d *vptr : %d",num,*(int *)vptr); //*(int *)vptr
    // void pointer is initially unaware about its scale factor
    // so while dereferencing the data we should typecast it into correct datatype
    vptr=&ch;
    printf("\n vptr : %u &ch : %u",vptr,&ch);
    printf("\n ch : %c *vptr : %c",ch,*(char *)vptr);



    return 0;
}
