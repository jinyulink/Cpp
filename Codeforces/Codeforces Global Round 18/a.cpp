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
        int d=0;
        vector<int> a(n);
        for(int i=0; i<n; i++)  
        {
            cin>>a[i];
            d+=a[i];
        }
        if(d%n==0)  cout<<0<<endl;
        else    cout<<1<<endl;
    }
    return 0;
}