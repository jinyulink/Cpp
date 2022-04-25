/*************************************************************************
    > File Name: bb.cpp
    > Author: Jinlk
    > Link:
    > Created Time: Mon Apr 25 18:39:32 2022
 ************************************************************************/
#include<bits/stdc++.h>
#define IO cin.tie(0);ios_base::sync_with_stdio(false)
#define ll long long
#define vt vector
#define pb push_back
const ll MAXN=1000;
const ll INF=1e9+1;
ll dp[MAXN+1][2];
ll mx[MAXN+1],mn[MAXN+1];
using namespace std;
int main()
{
    IO;
    int t,k;cin>>t;k=t;
    while(t--)
    {
		ll n,p,a,res,l0,l1;
		cin>>n>>p;
		for(int i=0;i<n;i++)
		{
			mx[i]=0;
			mn[i]=INF;
			for(int j=0;j<p;j++)
			{
				cin>>a;
				mx[i]=max(mx[i],a);
				mn[i]=min(mn[i],a);
			}
			dp[i][0]=min(dp[i-1][0]+abs(l0-mn[i])+mx[i]-mn[i],dp[i-1][1]+abs(l1-mn[i])+mx[i]-mn[i]);
			dp[i][1]=min(dp[i-1][0]+abs(l0-mx[i])+mx[i]-mn[i],dp[i-1][1]+abs(l1-mx[i])+mx[i]-mn[i]);
			l0=mx[i];
			l1=mn[i];
		}
		res=min(dp[n-1][0],dp[n-1][1]);
        cout<<"Case #"<<k-t<<": "<<res<<'\n';
    }
    return 0;
}
