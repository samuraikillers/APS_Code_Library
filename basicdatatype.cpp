#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long s;
    char d;
    float f;
    double g;
    cin>>a>>s>>d>>f>>g;
    cout<<a<<endl<<s<<endl;
    cout<<d<<endl<<setprecision(8)<<f<<endl<<setprecision(16)<<g;
    return 0;
}

