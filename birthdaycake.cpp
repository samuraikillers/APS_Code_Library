#include<iostream>
using namespace std;
int main()
{
    int x,y=0,mx;
    cin>>x;
    int a[x];

    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }

    {
    mx=a[0];
for(int i=1;i<x;i++)
{
    if(mx<a[i])
        mx=a[i];
}
    }

    for(int i=0;i<1;i++)
    {
        for(int j=0;j<x;j++)
        {
            if(mx==a[j])
                y=y+1;
        }
    }
    cout<<y;

    return 0;
}
