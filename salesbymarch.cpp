#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int x,a,fre=1,par=0;
    cin>>x;
    int ar[x];
    for(int i=0;i<x;i++)
    {
        cin>>ar[i];
    }

    for(int i=0;i<x-1;i++)
    {  fre=1;
        for(int j=i+1;j<x;j++)
        {
            if(ar[i]==ar[j])
            {
                fre++;
            }
        }

        if(fre%2==0)
        {
            par++;
        }
    }

    cout<<par;





    return 0;
}
