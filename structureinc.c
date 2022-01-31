// structure is user defined data type

#include<stdio.h>
struct employe
{
    int no;
    char name;
};
int main()
{
  struct employe e;
  e.no = 1234;
  e.name = 'hello';

  printf("%d",sizeof(struct employe));
}


