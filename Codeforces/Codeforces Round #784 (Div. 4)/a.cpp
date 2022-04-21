/*************************************************************************
    > File Name: a.cpp
    > Author: Jinlk
    > Link:
    > Created Time: Thu Apr 21 22:51:01 2022
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
		ll k;
		cin>>k;
		if(k>=1900)	cout<<"Division 1\n";
		else if(k>=1600)	cout<<"Division 2\n";
		else if(k>=1400)	cout<<"Division 3\n";
		else cout<<"Division 4\n";
	}
    return 0;
}
