
#include<iostream>
using namespace std;

int main()
{
    int marks[4] = {23,45,67,89};
    int *p=marks;


    for(int i = 0; i < 4; i++)
       {
           cout<<marks[i]<<endl;

        cout<<p<<endl;
}

       }
