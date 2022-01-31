#include<stdio.h>
int main()
{
    /*char str[10]="Sunbeam";
    char name[20];
    printf("Enter your name:\t");
    scanf("%s",name);
    printf("%s %s",str,name);
    */
    char *str = "precat";
    printf("str: %s", str);
    printf("\nstr: %u", str);
    printf("\n base addres str: %u", &str);
    printf("\n*str: %d", *str);
    printf("\n*str: %c", *(str+2));
    printf("\n: %c", *str+1);
    printf("\n: %c", *(str+1)+1);
    printf("\t %d", sizeof(str));

}
