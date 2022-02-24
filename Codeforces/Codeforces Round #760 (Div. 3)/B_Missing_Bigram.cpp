//Author: Jinyulink
//https://codeforces.com/contest/1618/problem/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        n-=2;
        vector<string> a(n);
        for(string & i : a) cin>>i;
        string ans="";
        ans+=a[0][0];
        for(int i=1; i<n; i++)
        {
            if(a[i][0]==a[i-1][1])
            {
                ans+=a[i][0];
            }
            else
            {
                ans+=a[i-1][1];
                ans+=a[i][0];
            }
        }
        if(ans.size()!=n+2)
        {
            ans+=a[n-1][1];
        }
        if(ans.size()!=n+2)
        {
            ans+='a';
        }
        cout<<ans<<endl;
    }
    return 0;
}