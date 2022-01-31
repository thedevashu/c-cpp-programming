#include<iostream>
using namespace std;
//using std::string;
//creating class employee
//In class everything is private by default
class Employee
{
    //Declaring private
private://<--its called Access modifier
    string Name;
    string Company;
    short int Age;
public:
    string NamePub;
    string CompanyPub;
    short int AgePub;
    void Disp()
    {

        cout<< "Name :"<< NamePub <<endl;
        cout << "Company :"<< CompanyPub<<endl;
        cout<< "Age :"<< AgePub <<endl;
    }
};
int main()
{
    Employee emp1;
    emp1.NamePub = "Ashu";
    emp1.CompanyPub = "Nun";
    emp1.AgePub = 22;
    emp1.Disp();


}
