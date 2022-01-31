
#include<stdio.h>

int main(void)
{
    int option;
    printf("Enter option");
    scanf("%d",&option);
    switch(option)
    {
   case 1:
   case 3:
   case 5:
    printf("ITs odd bro!");
    }
    return 0;
}
/*

int main(void)
{
    int i;
    printf("Enter Character");
    scanf("%d",&i);
    switch(i)
    {
        case 'A':   //case 65:
        printf("Inside capital A case");
        break;
        case 'a': //case 97:
        printf("Inside small a case");
        break;
        default:
        printf("inside default");
        break;
    }
    return 0;
}
*/



/*
int main(void)
{
    char ch;
    printf("Enter Character");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A':   //case 65:
        printf("Inside capital A case");
        break;
        case 'a': //case 97:
        printf("Inside small a case");
        break;
        default:
        printf("inside default");
        break;
    }
    return 0;
}
*/


/*
int main(void)
{
    int n1,n2;
    int choice;
    printf("Enter First Number :");
    scanf("%d",&n1);
    printf("Enter second Number :");
    scanf("%d",&n2);
    printf("\n Enter Choice : 1.Add 2.Sub 3.Mul 4.Div 5.Mod");
    scanf("%d",&choice);
    //switch case always takes integer value as a choice
    switch(choice)
    {
        case 1:
            printf("\n Addition = %d",n1+n2);
        //if we dont add break statement after each case
        //switch case will execute to all the next cases untill the occurance of break

        case 2:
            printf("\n Subtraction = %d",n1-n2);

        case 3:
            printf("\n Multiplication = %d",n1*n2);
        break;
        case 4:
            printf("\n Division = %d",n1/n2);
        break;
        case 5:
            printf("\n Mod = %d",n1%n2);
        break;
        default:
            printf("Wrong option selected");
        break;
    }
    return 0;
}
*/

/*
int main(void)
{
    int n1,n2;
    int choice;
    printf("Enter First Number :");
    scanf("%d",&n1);
    printf("Enter second Number :");
    scanf("%d",&n2);
    printf("\n Enter Choice : 1.Add 2.Sub 3.Mul 4.Div 5.Mod");
    scanf("%d",&choice);
    //switch case always takes integer value as a choice
    switch(choice)
    {
        //sequence of switch case does not matter
        case 2:
            printf("\n Subtraction = %d",n1-n2);
        break;
        case 1:
            printf("\n Addition = %d",n1+n2);
        break;

        case 3:
            printf("\n Multiplication = %d",n1*n2);
        break;
        case 4:
            printf("\n Division = %d",n1/n2);
        break;
        case 5:
            printf("\n Mod = %d",n1%n2);
        break;
            // default case is optional
    } //end of switch block
    return 0;
}

*/



//switch case
// Option Based
// 1.Add 2.Sub 3.Mul 4.Div 5.Mod
/*
int main(void)
{
    int n1,n2;
    int choice;
    printf("Enter First Number :");
    scanf("%d",&n1);
    printf("Enter second Number :");
    scanf("%d",&n2);
    printf("\n Enter Choice : 1.Add 2.Sub 3.Mul 4.Div 5.Mod");
    scanf("%d",&choice);
    //switch case always takes integer value as a choice
    switch(choice)
    {
        case 1:
            printf("\n Addition = %d",n1+n2);
        break;
        case 2:
            printf("\n Subtraction = %d",n1-n2);
        break;
        case 3:
            printf("\n Multiplication = %d",n1*n2);
        break;
        case 4:
            printf("\n Division = %d",n1/n2);
        break;
        case 5:
            printf("\n Mod = %d",n1%n2);
        break;
        default:
            printf("Wrong option selected");
        break;
    }
    return 0;
}

*/


