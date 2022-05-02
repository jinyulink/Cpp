//Author: Jinlk
//https://codeforces.com/contest/1674/problem/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        char a=s[0];
        char b=s[1];
        int ans=0;
        ans+=(s[0]-'a')*25;    
        ans+=(25-('z'-s[1]));
        if(s[1]=='a')   ans++;
        else if(s[1]<=s[0]-1)   ans++;
        cout<<ans<<'\n';
    }
    return 0;
}