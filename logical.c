#include<stdio.h>
#include<conio.h>

 int main()
 {

     /*priority
     1.NOT !
        *it is also unary operator
        *priority is same as unary operator
        *it inverts the truth value of statment
        eg : !T = F,!F = T
     2.AND &&
     3.OR ||
     */

     int y,x=5;
     y=!x>4;
     printf("%d",y);
     return 0;
 }
