#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector <int> s;

    int x,y;
    cin>>x;
    for(int i=0;i<x;i++)
    {  cin>>y;
        s.push_back(y);
    }

  sort(s.begin(),s.end());
    for(int i=0;i<x;i++)
    { cout<<s[i]<<" ";
    }
return 0;
}

