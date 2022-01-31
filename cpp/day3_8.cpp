#include <iostream>
using namespace std;

class Test
{
public:
    void disp()
    {
        cout << "IN Display" << endl;
    }

    static void function_1()
    {
        cout << "Inside static";
    }
};

int main()
{
    Test tobj;
    tobj.disp();
    // to call member function of class without creating object
    // we declare member function as static

    Test::function_1();
    // if we wish to call static member functions of class
    //we call them with the help of classname::functionname
    return 0;
}