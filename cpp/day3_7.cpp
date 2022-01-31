#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imag;

public:
    Complex()
    {
        this->real = 5;
        this->imag = 5;
    }
    //Complex c2(60,20);
    // Current object c2
    // int real = 60 int imag = 20
    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }
    //Complex c3(c2);
    // Current object c3  this  c3   and argument c2 object
    // Complex &temp=c2

    Complex(Complex &temp) // copy constructor
    {
        this->real = temp.real;
        this->imag = temp.imag;
    }
    void disp()
    {
        cout << " Real : " << this->real << " Imag : " << this->imag << endl;
    }

    ~Complex()
    {
    }
};

int main(void)
{
    Complex c1;
    c1.disp();
    Complex c2(60, 20);
    c2.disp();
    Complex c3(c1); // Constructor who can take one argument of type object
    // created c3 object
    c3.disp();
    return 0;
}