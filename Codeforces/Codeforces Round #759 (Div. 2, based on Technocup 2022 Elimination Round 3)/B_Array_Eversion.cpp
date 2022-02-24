//Author: Jinyulink
//https://codeforces.com/contest/1591/problem/B
//DP LIS
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;//test cases
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int m=a[n-1];
        int k=0;
        for(int i=n-1;i>=0;i--)
        {
            int tem=m;
            m=max(m,a[i]);
            if(tem!=m)
                k++;
        }
        cout<<k<<endl;
    }
    return 0;
}