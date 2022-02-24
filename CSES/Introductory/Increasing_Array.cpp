//Author: Jinlk
//https://cses.fi/problemset/task/1094
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=0;
    long long res=0;//result
    for(int i=0; i<n; i++)
    {
        int y;
        cin>>y;
        x=max(x,y);
        res+=x-y;
    }
    cout<<res;
    return 0;
}