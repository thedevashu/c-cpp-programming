#include<iostream>
using namespace std;

typedef struct employee
{
    int id ;
    string name;
    int salary;
}ep;

int main ()
{
    ep harry;
    harry.id=1234;
    harry.name = "Harry putter";
    harry.salary = 7000000;
    cout<<harry.name;

}
