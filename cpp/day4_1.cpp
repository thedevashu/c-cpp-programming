#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Enter no. of element in arry : ";
    cin>> n;

    int *ptr= new int[n];

    cout<< "Enter the element of arry : " ;
    int i;
    for(i=0;i<n;i++)
    {
        cin>> ptr[i];
    }

    cout<< "Array elements are : ";
    for(i=0;i<n;i++)
    {
        cout<< "\t"<< ptr[i];
    }
}
