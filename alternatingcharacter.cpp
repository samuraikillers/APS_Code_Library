#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,count=0;
    string s;
    vector <int>ar;
    cin>>x;
    while(x!=0)
    {  count=0;
        cin>>s;
        for(int i=0;i<s.size()-1;i++)
        {
            if((int)s[i]==(int)s[i+1])
            {
                count++;
            }
        }
        ar.push_back(count);
        x--;
    }
for(int i=0;i<ar.size();i++)
{
    cout<<ar[i]<<"\n";
}
    return 0;
}
