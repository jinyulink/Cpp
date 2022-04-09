//Author: jinlk
//https://codingcompetitions.withgoogle.com/codejam/round/0000000000877ba5/0000000000aa8e9c
#include<bits/stdc++.h>
#define IO cin.tie(0);ios_base::sync_with_stdio(false)
#define vt vector
#define pb push_back
using namespace std;
int main()
{
    IO;
    int t,k; cin>>t; k=t;
    while(t--)
    {
        string s,res; cin>>s;
        char c=s[s.length()-1];
        res.pb(c);
        for(int i=s.length()-2;i>=0;i--)
        {
            res.pb(s[i]);
            if(s[i]==s[i-1])
                if(s[i]<c)  res.pb(s[i]);
            else if(s[i]<c)
            {
                res.pb(s[i]);
                c=s[i];
            }
            else    c=s[i];
        }
        reverse(res.begin(),res.end());
        cout<<"Case #"<<k-t<<": "<<res<<'\n';
    }
    return 0;
}