#include<stdio.h>
// Menu driven program
// do..while along with switch

enum MenuList{EXIT,ADD,SUB,MUL,DIV,MOD};

int main(void)
{
    int n1,n2;
    int choice;
    printf("Enter First Number :");
    scanf("%d",&n1);
    printf("Enter second Number :");
    scanf("%d",&n2);
    do
    {
    printf("\n Enter Choice : 0.Exit 1.Add 2.Sub 3.Mul 4.Div 5.Mod \n");
    scanf("%d",&choice);
    //switch case always takes integer value as a choice
    switch(choice)
    {
        case ADD:
            printf("\n Addition = %d",n1+n2);
        break;
        case SUB:
            printf("\n Subtraction = %d",n1-n2);
        break;
        case MUL:
            printf("\n Multiplication = %d",n1*n2);
        break;
        case DIV:
            printf("\n Division = %d",n1/n2);
        break;
        case MOD:
            printf("\n Mod = %d",n1%n2);
        break;
    }
    }while(choice!=EXIT);
    return 0;
}
