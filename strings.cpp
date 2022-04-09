#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// Complete the program
  string y;
  string x;
  string j;
  string a;
  string b;
    getline(cin, a);
      getline(cin, b);
   cout<<a.length()<<" "<<b.length();
    y=a+b;
   cout<<"\n"<<y;
   x=a.at(0);
   j=b.at(0);
   
   a.at(0)=j.at(0);
   b.at(0)=x.at(0);
   cout<<"\n"<<a<<" "<<b;
    return 0;
}

