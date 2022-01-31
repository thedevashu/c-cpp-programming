#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main ()

{

    string s="asfas";
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s;
    /*string s = "asjg";
    for (int i = 0 ; i<s.size();i++)
    {
        if(s[i]>='a'&&s[1]<='z')
        {
            s[i]=s[i]-32;

        }
    }
    cout<<s;

    for(int i = 0 ; i < s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            s[i]=s[i]+32;
    }
    cout<<s;*/
}
