//Author: Jinlk
//https://cses.fi/problemset/task/1754
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ull int a,b,c;
        cin>>a>>b;
        if((a+b)%3) cout<<"NO\n";
        else
        {
            c=(a+b)/3;
            if(a>=c&&b>=c)  cout<<"YES\n";
            else    cout<<"NO\n";
        } 
    }
    return 0;
}