#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {


long int y,z,count=0,tot=0;

for(int i=0;i<s.length();i++)
{
    if(s[i]=='a')
    {
        count++;
    }
}
y=n/s.length();
z=n%s.length();
tot=count*y;
for(int i=0;i<z;i++)
{
    if(s[i]=='a')
    {
        tot++;
    }
}

return tot;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
