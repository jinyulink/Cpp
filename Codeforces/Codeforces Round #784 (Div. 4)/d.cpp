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
		int c=0,cc=0;
		if(n==1){	cout<<"NO\n";res=0;}
		else if(n==2)
		{
			if(s[0]=='W'||s[1]=='W'){	cout<<"NO\n";res=0;}
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				if(s[i]=='W')	c=1;
				else if(c==1&&s[i]!='W')	cc++;
				else if(c==1&&s[i]==s[i-1])	cc++;
				if(c==1&&cc>0&&s[i]=='W')	{cout<<"NO\n";c=0;cc=0;res=0;break;}
			}
		}
		if(res)	cout<<"YES\n";
    }
    return 0;
}
