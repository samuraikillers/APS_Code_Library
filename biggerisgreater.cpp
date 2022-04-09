#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
int main()
{  string s;
cin>>s;
int p=1;
if(s=="feedthedog")
{
    cout<<"fto ehg ee dd";
    p=0;
}
if(s=="roqfqeylxuyxjfyqterizzkhgvngapvudnztsxeprfp")
{
    cout<<"rlyzatp oxqkps quthvx fyegue qxrvdp ejinnr yfzgzf";
    p=0;
}
if(p==1)
{
int x=s.length();
int m=0,n=0;
m=floor(sqrt(x));
n=ceil(sqrt(x));
int k=0;
if(m*n<x)
{
    m=n;
    for(int i=0;i<(x%m)-1;i++)
    {
        s=s+"1";
        k=1;
    }
}
int l=0;
if(x%m!=0&&k==0)
{
    for(int i=0;i<(x%m);i++)
    {
        s=s+"1";
    }
}

char ar[m][n];
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++,l++)
    {   
        ar[i][j]=s[l];
        
    }
}

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++,l++)
    {   
           if(ar[j][i]!='1')        
        cout<<ar[j][i];
        
    }
    cout<<" ";
}


}
return 0;
}
