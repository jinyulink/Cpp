/*************************************************************************
    > File Name: d.cpp
    > Author: Jinlk
    > Link:
    > Created Time: Thu Apr 21 23:51:38 2022
 ************************************************************************/
#include<bits/stdc++.h>
#define IO cin.tie(0);ios_base::sync_with_stdio(false)
#define ll long long
#define vt vector
#define pb push_back
using namespace std;
int main()
{
    IO;
    int t,k;cin>>t;k=t;
    while(t--)
    {
        int n; cin>>n;
		string s;
		cin>>s;
		int res=1;
		int c=0,cc=1;
        vt<string> v;
        string ss;
		for(int i=0;i<n;i++)
        {
            if(s[i]!='W')   ss.pb(s[i]);
            if(s[i]=='W')   {v.pb(ss);ss="";}
            if(i==n-1) {v.pb(ss);ss="";}
        }
        for(int i=0;i<v.size();i++)
        {
            // cout<<v[i]<<'\n';
            for(int j=0;j<v[i].size();j++)
            {
                if(j>0&&v[i][j]==v[i][j-1]) {cc++;}
            }
            if(cc==v[i].size()) {res=0;cc=0;break;}
            cc=1;
        }
        if(res) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
