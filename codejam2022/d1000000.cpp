//Author: Jinlk
//https://codingcompetitions.withgoogle.com/codejam/round/0000000000876ff1/0000000000a46471
#include<bits/stdc++.h>
#define IO cin.tie(0);ios_base::sync_with_stdio(false)
#define vt vector
#define pb push_back
using namespace std;
int main()
{
    IO;
    int t,k; cin>>t;
    k=t;
    while(t--)
    {
        int n; cin>>n;
        vt<int> s;
        vt<int> res;
        for(int i=0; i<n; i++)
        {
            int l; cin>>l;
            s.pb(l);
        }
        sort(s.begin(), s.end());
        int h=1;
        for(int i=1; i<=n; i++)
        {
            if(s[i-1]>=h)
            {
                res.pb(s[i-1]);
                h++;
            }
        }
        cout<<"Case #"<<k-t<<": "<<res.size()<<'\n';
    }
    return 0;
}