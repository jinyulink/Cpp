//Author: Jinlk
//https://cses.fi/problemset/task/1069
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int r=1; //result
    vector<int> rr;
    for(int i=1; i<n.length(); i++)
    {
        if(n[i]==n[i-1])
        {
            r++;
            if(i==n.length()-1)
                rr.push_back(r);
        }
        else
        {
            rr.push_back(r);
            r=1;
        }
    }
    if(n.length()==1)
        rr.push_back(r);
    sort(rr.begin(), rr.end());
    reverse(rr.begin(), rr.end());
    cout<<rr[0]<<endl;
    return 0;
}