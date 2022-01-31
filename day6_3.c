#include<stdio.h>

enum colors {RED,GREEN,BLUE};
// RED : 0
// GREEN : 1
// BLUE : 2

//enum colors is user defined datatype

int main(void)
{
    //datatype variablename;
    int num; // num is a variable of type int
    enum colors clr; // clr is a variable of type enum colors
    num=30; // 30 value is assigned to num variable
    clr=GREEN; // GREEN is a enum element holded by clr variable
    printf("Num : %d  clr = %d",num,clr);


    return 0;
}




/*
//enum Departments{COMP=10,IT=20,MECH=30,CIVIL=40,ENTC=50};
//enum Departments{COMP=10,IT,MECH,CIVIL,ENTC};
//enum Departments{COMP,IT=5,MECH,CIVIL=9,ENTC};
//enum Departments{COMP,IT,MECH=-3,CIVIL=9,ENTC};
enum Departments{COMP,IT,MECH=-3,CIVIL,ENTC};

// enum Departments{COMP,IT,MECH=-3,CIVIL,ENTC,COMP};//ERROR


//enum Departments is user defined datatype
int main(void)
{

    printf("COMP = %d IT = %d MECH = %d CIVIL = %d ENTC = %d",COMP,IT,MECH,CIVIL,ENTC);
    //COMP++; //error: lvalue required as increment operand

    return 0;
}

*/

//assign numeric constant values to some elements
// COMP = 0
// IT = 1
//MECH = 2
// CIVIL= 3
// ENTC = 4

// enum : enumerated list of constants
/*
enum Departments{COMP,IT,MECH,CIVIL,ENTC}; // global area
//enum is a keyword , always takes int values
// Departments is a name of enum
// COMP =0 ,IT = 1,MECH = 2,CIVIL = 3,ENTC= 4

int main(void)
{
    printf("COMP = %d IT = %d MECH = %d CIVIL = %d ENTC = %d",COMP,IT,MECH,CIVIL,ENTC);
    return 0;
}
*/
