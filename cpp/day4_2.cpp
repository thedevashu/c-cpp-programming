#include<iostream>
using namespace std;

int main()
{

    int n1,n2;
    cout<<" Enter first num : ";
    cin>>n1;

    cout<< "Enter second num : ";
    cin>>n2;

    int res;


    try
    {
        if(n2==0)
            throw 1;
            else
            {
                res = n1/n2;
                cout<< "result : " << res;
            }
    }

    catch(int a)
    {
        cout<< "You have enter second number as 0 ";
    }
}
