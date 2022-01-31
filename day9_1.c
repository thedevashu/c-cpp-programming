#include<stdio.h>


struct Employee
{
    char name[20];
    int id;
};

int main(void)
{

    struct Employee e[3]; // array of strcuture variables
    // e[0] : name id
    // e[1] : name id
    //e[2] : name id
    int i;
    for(i=0;i<3;i++)
    {
    printf("Enter Name :");
    scanf("%s",e[i].name);
    printf("Enter ID :");
    scanf("%d",&e[i].id);
    }
    for(i=0;i<3;i++)
    printf("\n Employee Record : ID = %d Name : %s",e[i].id,e[i].name);

    return 0;
}




/*
struct Employee
{
    char name[20];
    int id;
};

int main(void)
{
    struct Employee e;
    printf("Enter Name :");
    scanf("%s",e.name);
    printf("Enter ID :");
    scanf("%d",&e.id);
    printf("Employee Record : ID = %d Name : %s",e.id,e.name);

    return 0;
}
*/

/*

struct Employee
{
    int empid;
    float salary;
}e1={1,50000.467},e2; // e1 is a varibale of type structure Employee

int main(void)
{

    printf("\n Empid : %d Salary : %f",e1.empid,e1.salary);

    return 0;
}

*/

/*
struct Employee
{
    int empid;
    float salary;
}e1; // e1 is a varibale of type structure Employee

int main(void)
{
    e1.empid=1;
    e1.salary=70000.45;
    printf("\n Empid : %d Salary : %f",e1.empid,e1.salary);

    return 0;
}
*/


/*
struct Student
{
    int rollno;
    int marks;
    char grade;
};
int main(void)
{
    //int a,b,c;
    struct Student s1,s2,s3; //create structure variables inside main
    s1.rollno=1;
    s1.marks=70;
    s1.grade='A';
    s2=s1; // copying elements from s1 to s2 variable
    printf("\n S1 : Roll no  : %d Marks : %d Grade : %c",s1.rollno,s1.marks,s1.grade);
    printf("\n S2 : Roll no  : %d Marks : %d Grade : %c",s2.rollno,s2.marks,s2.grade);
    s3.rollno=3;
    s3.marks=89;
    s3.grade='A';
    printf("\n S3 : Roll no  : %d Marks : %d Grade : %c",s3.rollno,s3.marks,s3.grade);
    return 0;
}

*/


