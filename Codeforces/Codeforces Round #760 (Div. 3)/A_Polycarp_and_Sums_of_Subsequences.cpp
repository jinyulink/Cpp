//Author: Jinyulink
//https://codeforces.com/contest/1618/problem/0
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> b(7);
        for(int i = 0; i < 7; i++)
            cin>>b[i];
        cout<<b[0]<<" "<<b[1]<<" "<<b[6]-b[0]-b[1]<<endl;
    }
    return 0;
}