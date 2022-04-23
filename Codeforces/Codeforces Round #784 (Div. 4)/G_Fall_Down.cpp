#include<bits/stdc++.h>
#define IO cin.tie(0);ios_base::sync_with_stdio(false)
#define ll long long
#define vt vector
#define pb push_back
using namespace std;
int main()
{
    IO;
    ll t; cin>>t;
    while(t--)
    {
        ll n,m; cin>>n>>m; 
        char v[n][m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)    cin>>v[i][j];   
        for(int i=0;i<m;i++)
        {
            int last=n-1;
            for(int j=n-1;j>=0;j--)
            {
                if(v[j][i]=='o')    last=j-1;
                else if(v[j][i]=='*'){v[j][i]='.';v[last][i]='*';last--;}
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)    cout<<v[i][j];
            cout<<'\n';
        }
    }
    return 0;
}