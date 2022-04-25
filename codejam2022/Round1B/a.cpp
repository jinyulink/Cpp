/*************************************************************************
    > File Name: a.cpp
    > Author: Jinlk
    > Link: Codejam 1B https://codingcompetitions.withgoogle.com/codejam/round/000000000087711b/0000000000acd59d
    > Created Time: Sun Apr 24 23:52:52 2022
 ************************************************************************/
#include<bits/stdc++.h>
#define IO cin.tie(0);ios_base::sync_with_stdio(false)
#define ll long long
#define vt vector
#define pb push_back
#define dq deque
using namespace std;
int main()
{
    IO;
    int t,k;cin>>t;k=t;
    while(t--)
    {
        ll res=0,n; cin>>n;
        dq<int> d;
        for(int i=0;i<n;i++)
        {
            ll x; cin>>x;
            d.pb(x);
        }
        ll c=0;
        for(int i=0;i<n; i++)
        {
            if(d[0]<=d[d.size()-1])
            {
                if(d[0]>=c) {res++; c=d[0];}
                d.pop_front();
            }
            else if(d[0]>d[d.size()-1])
            {
                if(d[d.size()-1]>=c) {res++;c=d[d.size()-1];}
                d.pop_back();
            }
        }
        cout<<"Case #"<<k-t<<": "<<res<<'\n';
    }
    return 0;
}
