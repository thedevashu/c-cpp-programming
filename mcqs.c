#include<stdio.h>
struct
{
  unsigned int age: 2;
}Age;
int main()
{
  Age.age = 3;
  printf("Age .age: %d",Age.age);
   Age.age = 4;
  printf("upnAge .age: %d",Age.age);
  return 0;
}
