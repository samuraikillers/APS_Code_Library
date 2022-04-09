#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }

vector<int> x;
int z=0;

for(int i=0;i<60;i++)
{
    if(i%2!=0)
    {
        z=z*2;
        x.push_back(z);
    }
    else
    {
       z=z+1;
       x.push_back(z);
    }
}

for(int i=0;i<t;i++)
{
    cout<<x[a[i]]<<"\n";
}

    return 0;
}
