/*************************************************************************
    > File Name: c.cpp
    > Author: Jinlk
    > Link:
    > Created Time: Thu Apr 21 23:05:20 2022
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
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)	cin>>a[i];
		if(n==1)	cout<<"YES\n";
		else
		{
			int aa=1,bb=1,c1=a[0]%2,c2=a[1]%2;
			for(int i = 0; i < n; i+=2)
			{
				if(a[i]%2!=c1){aa=0;break;}
			}
			for(int i = 1; i < n; i+=2)
			{
				if(a[i]%2!=c2){bb=0;break;}
			}
			if(aa&&bb)	cout<<"YES\n";
			else	cout<<"NO\n";
		}
    }
    return 0;
}
