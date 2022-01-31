#include<iostream>
using namespace std;
class AbstractEmploye{

    virtual void AskForProm()=0;

};
class Employee:AbstractEmploye
{
    string Name;
    string Company;
    int Age;

public:
    void setName(string name){//Setter
    Name = name;

    }
    string getName(){//Getter
        return Name;
    }
    void setCompany(string company){Company = company;}
    string getCompany(){return Company;}
    void setAge(int age){Age = age;}
    int getAge(){return Age;}
    void Display()
    {
        cout<< "Name : "<<Name<<endl;
        cout<< "Company Name : "<<Company<<endl;
        cout<< "Age : "<<Age<<endl;


    }
    void AskForProm()
    {
        if(Age > 20)
            cout << Name<< "Got prometed"<< endl;
        else
            cout<< Name<< "not promoted"<< endl;
    }

    //Constructor
    Employee(string name,string company ,int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    Employee(){

    }

};

int main()
{
  Employee emp1 = Employee("Ashu","Zoron",22);
  emp1.Display();
  Employee emp2 = Employee("notAshu ","Zoron ",19);
  emp1.AskForProm();
  emp2.Display();
  emp2.AskForProm();


}
