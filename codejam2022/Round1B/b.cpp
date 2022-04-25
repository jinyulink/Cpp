/*************************************************************************
    > File Name: b.cpp
    > Author: Jinlk
    > Link:
    > Created Time: Sun Apr 24 23:52:58 2022
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
    {	ll n,p; cin>>n>>p;
		ll s=0;ll res=0;
		while(n--)
		{
			ll x[p];
			for(int i=0;i<p;i++)
			{
				cin>>x[i];
			}
		}
        cout<<"Case #"<<k-t<<":"<<res;
    }
    return 0;
}
