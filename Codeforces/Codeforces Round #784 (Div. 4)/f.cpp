/*************************************************************************
    > File Name: f.cpp
    > Author: Jinlk
    > Link:
    > Created Time: Fri Apr 22 01:02:29 2022
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
        ll n; cin>>n;
		ll ans=0;
		ll v[n];
		for(int i=0;i<n;i++)	cin>>v[i];
		int a=0,b=n-1;
		ll sum1=v[0],sum2=v[n-1];
		while(a<b)
		{
			if(sum1==sum2)	ans=max(ans,a+1+n-b);
			if(sum1<=sum2)
			{
				a++;
				sum1+=v[a];
			}
			else
			{
				b--;
				sum2+=v[b];
			}
		}
		cout<<ans<<'\n';
	}
    return 0;
}
