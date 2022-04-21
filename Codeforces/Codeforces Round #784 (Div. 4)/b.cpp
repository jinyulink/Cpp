/*************************************************************************
    > File Name: b.cpp
    > Author: Jinlk
    > Link:
    > Created Time: Thu Apr 21 22:54:07 2022
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
	  int array[n];
	  for(int i=0;i<n;i++)	cin>>array[i];
	  sort(array,array+n);
	  int c=0;
	  int h=0;
	  int ans=0;
	  for(int i=0;i<n;i++)
		{
			if(i>0&&array[i]==array[i-1])	c++;
			else	c=0;
			if(c==2){h=1; ans=array[i];}
		}
	  if(h)	cout<<ans<<'\n';
	  else	cout<<"-1\n";
    }
    return 0;
}
