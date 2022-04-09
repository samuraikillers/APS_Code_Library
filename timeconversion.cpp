#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{ string m,n,a,b;
string z,q;
    string s;
    string t,l;
   
    getline(cin,s);

    q=s;
 a=s[8];
 b=s[9];
 t=a+b;

  m=s[0];
  n=s[1];

  z=m+n;

 if(t=="PM")
 {
     if(z=="01")
     z="13";
     else if(z=="02")
        z="14";
       else if(z=="02")
        z="14";

          else if(z=="03")
        z="15";

          else if(z=="04")
        z="16";

          else if(z=="05")
        z="17";

          else if(z=="06")
        z="18";

          else if(z=="07")
        z="19";

          else if(z=="08")
        z="20";

          else if(z=="09")
        z="21";
          else if(z=="10")
        z="14";
  else if(z=="22")
        z="14";

          else if(z=="11")
        z="23";
          else if(z=="12")
        z="12";




 }
 else if(t=="AM")
 { if(z=="01")
     z="01";
     else if(z=="02")
        z="02";


          else if(z=="03")
        z="03";

          else if(z=="04")
        z="04";

          else if(z=="05")
        z="05";

          else if(z=="06")
        z="06";

          else if(z=="07")
        z="07";

          else if(z=="08")
        z="08";

          else if(z=="09")
        z="09";
          else if(z=="10")
        z="10";
  else if(z=="11")
        z="11";


          else if(z=="12")
        z="00";

 }

 q[0]=z[0];
 q[1]=z[1];

q.erase(8);
cout<<q;

    return 0;
}
