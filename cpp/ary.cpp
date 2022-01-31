#include<iostream>
using namespace std;

class Calci{
public:

void adder(int a,int b)
{
    cout<< a+b;
}

void subtractor(int a,int b)
{
    cout<< a-b;
}
void multi(int a,int b)
{
    cout<< a*b;
}
void divid(int a,int b)
{
    cout<< a/b;
}
};



int main()
{
    Calci cl;
    int num1,num2;
    char ch;
    cout<<"Enter the both numbers :"<<endl;
    cin>>num1>>ch>>num2;
    if (ch == '+')
        cl.adder(num1,num2);

    else if(ch == '-')
        cl.subtractor(num1,num2);
    else if(ch == '*')
        cl.multi(num1,num2);
    else if(ch == '/')
        cl.divid(num1,num2);




}
