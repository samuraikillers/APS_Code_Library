#include<iostream>
#include<string>

using namespace std;

int main()
{  string hour[14]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen"};
string hour1[14]={"sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine"};

    int x,y;
    string h,m,k;
    cin>>x>>y;

    for(int i=1;i<=12;i++)
    {
        if(x==i)
        {
            h=hour[i-1];
            k=hour[i];
        }
    }

if(y<15&&y>0)
{


  for(int i=1;i<15;i++)
  {
      if(y==i)
      {
          m=hour[i-1];
      }
  }
  cout<<m<<" minute past "<<h;
}
else if(y>15&&y<30)
    {

  for(int i=16,j=1;j<16,i<30;i++,j++)
  {
      if(y==i)
      {
          m=hour1[j-1];
      }
  }
  cout<<m<<" minutes past "<<h;
}
else if(y==15)
{
    cout<<"quarter past "<<h;
}

else if(y==30)
{
    cout<<"half past "<<h;
}

else if(y>30&&y<45)
{


      m=hour1[(45-y)-1];
      cout<<m<<" minutes to "<<k;


}
else if(y==45)
{
    cout<<"quarter to "<<k;

}

else if(y>45&&y<60)
{
    m=hour[(60-y)-1];
    cout<<m<<" minutes to "<<k;
}
else if(y==0)
{
    cout<<h<<" o' clock";
}
    return 0;
}
