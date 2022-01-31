#include<iostream>

struct Student
{
    char name[20];
    int rollno;
    int age;
    void accept_record()
    {
        printf("Enter name :");
        scanf("%s", name);

        printf("\n Enter roll no: ");
        scanf("%d",&rollno);

        printf("\n Enter age: ");
        scanf("%d",&age);
        printf("\nName: %s Roll no: %d Age: %d ",name,rollno,age);
    }

};

int main(void)

{
    struct Student s1;
    s1.accept_record();
    return 0;
}
