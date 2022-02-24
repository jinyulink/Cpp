//Author: Jinyulink
//https://codeforces.com/contest/1591/problem/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> x(n);
        for(int i=0; i<n; i++)
            cin>>x[i];
        vector<int> a,b; //negative , positive
        for(int i=0;i<n;i++)
        {
            if(x[i]<0)
                a.push_back(-1*x[i]);
            else
                b.push_back(x[i]);
        }        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        long long int ans=0;
        for(int i=a.size()-1;i>=0;i-=k)
            ans+=(a[i]*2);
        for(int i=b.size()-1;i>=0;i-=k)
            ans+=(b[i]*2);
            int m;
        if(a.size()>0&&b.size()>0)
            m=max(a[a.size()-1],b[b.size()-1]);
        else if(a.size()>0)
            m=a[a.size()-1];
        else if(b.size()>0)
            m=b[b.size()-1];
        ans-=m;
        cout<<ans<<endl;
    }
    return 0;
}