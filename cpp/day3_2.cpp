#include<iostream>
using namespace std;
class Test
{
    int num1;
    int num2;
public:
    void accept();
    void disp();

};
void Test::accept()
{
    cout<< "Enter num1";
    cin>> num1;
    cout<< "Enter num2";
    cin>> num2;
}

void Test::disp()
{
    cout<< "NUM1 :"<<num1<< "NUM2: "<< num2;

}
int main()
{
    Test t1;
    t1.accept();
    t1.disp();
}
