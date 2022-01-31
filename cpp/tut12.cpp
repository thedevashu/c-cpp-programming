#include<iostream>
using namespace std;
//pointer hold other variable memory addres
int main()
{
   int arry[5]= {1,2,3,4,5};
   int*p = arry;
   p++;
   cout<<arry[3]<<" - "<<p;
}
