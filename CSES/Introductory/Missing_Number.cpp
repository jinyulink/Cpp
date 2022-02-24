//Author: Jinlk
//https://cses.fi/problemset/task/1083
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n; 
    cin>>n;
    long long int x=0;
    for(int i=0;i<n-1;i++)
    {
        int y;
        cin>>y;
        x+=y;
    }
    cout<<(n*(1+n))/2-x; 
    return 0;
}