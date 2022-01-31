#include<stdio.h>
int main()
{
    /*
    AND OPERATOR (&)
    0&0 =0
    0&1 =0
    1&0 =0
    1&1 =1

    int x;
    x=23&56;
    printf("%d", x);
    */

    /*
    OR OPERATOR(|)
    0|0 =0
    0|1 =1
    1|0 =1
    1|1 =1

    int x;
    x=23|56;
    printf("%d", x);
    */


    /*
    XOR OPERATOR(^)
    0^0 =0
    0^1 =1
    1^0 =1
    1^1 =0

    int x;
    x=23^56;
    printf("%d", x);
     */
     int a=4,b=3;
     a = a^b;printf("XOR, a=%d and b=%d\n",a,b);
     b=a^b;printf("XOR, a=%d and b=%d\n",a,b);
     a=a^b;
     printf("XOR, a=%d and b=%d\n",a,b);

    /*
    RIGHT SHIFT OPERATOR (>>)

    ***LEFT SHIFTING IS EQUIVALENT TO DIVISION BY 2^(right operand)

        eg; 3>>1
            op=[3/2^1] = 1
            32>>4
            op=[32/2^4]= 2
    56>>2(means add 00 from left in 56 and shift right in binary)
        56 = 0000 0000 0011 1000
        56>>2 = 0000 0000 0000 1110
    56>>4(means add 0000 from left in 56 and shift right in binary)


    int x;
    x=56>>2;
    printf("%d", x);
    */


        /*
    LEFT SHIFT OPERATOR (<<)
    ***LEFT SHIFTING IS EQUIVALENT TO MUTILPICATION BY 2^(right operand)
    eg;  3<<1
         op=[3x2^1]= 6
         3<<4
         op=[3x2^4]=48
    56>>2(means add 00 from right in 56 and shift left in binary)
        56 = 0000 0000 0011 1000
        56<<2 =  0000 0001 1100 0000
    56>>4(means add 0000 from right in 56 and shift left in binary)


    int x;
    x=56<<2;
    printf("%d", x);
     */

   /* char x=1,y=2;
    if(x&y)
        printf("Result of x&y is 1");
    if(x&&y)
        printf("Result of x&&y is 1");

*/

}
