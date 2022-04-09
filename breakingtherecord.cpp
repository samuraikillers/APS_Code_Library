#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> scores;
    int times;
    cin>>times;
    for(int i=0;i<times;i++){
        int x;
        cin>>x;
        scores.push_back(x);
    }
    int min=scores[0],max=scores[0];
    int mincount=0,maxcount=0;
    for(int i=1;i<times;i++){
        if(scores[i]>max){
        max=scores[i];
        maxcount++;
    }
    if(scores[i]<min)
    {
        min = scores[i];
        mincount++;
    }
}

cout<<maxcount<<" "<<mincount<<"\n";
    
    return 0;
}
