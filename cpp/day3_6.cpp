#include<iostream>
using namespace std;

class Demo
{
    int val;
    const int c;
    mutable int m;
    public:
    Demo():val(20),c(15),m(50){}
    void disp()const
    {
        cout<<"Val : "<<val<<" C : "<<c<< " M : "<<m<<endl;
       // val++; //allowed
       // c++;//not allowed
       m++;
        cout<<"Val : "<<val<<" C : "<<c<< " M : "<<m<<endl;
    }
};

int main(void)
{
    Demo d;
    d.disp();
    cout<< sizeof(d);
    return 0;
}
