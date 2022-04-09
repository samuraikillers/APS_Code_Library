#include<iostream>
#include<string>
using namespace std;
int main()
{  int a;
    string s;
    getline(cin,s);
    a=s.size();
    for(int i=0;i<a;i++)
    {
        if(s[i]==',')
            cout<<"\n";
        else
            cout<<s[i];
    }

    return 0;
}
