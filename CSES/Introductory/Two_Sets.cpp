#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t=((1+n)*n)/2;
    int tt[n];
    if(t%2==0)
    {
        t/=2;
        cout<<"YES\n";
        vector<int> o;
        int h=0;
        for(int i=n;i>0;i--)
        {   
            if(i<=t)
            {
                o.push_back(i);
                t-=i;
                tt[i-1]=i;
                h++;
            }
        }
        cout<<h<<endl;
        for(int i=0;i<h;i++)    cout<<o[i]<<" ";
        cout<<endl;
        cout<<n-h<<endl;;
        for(int i=n-1;i>=0;i--)
        {
            if(tt[i]!=i+1)
            {
                cout<<i+1<<" ";
            }
        }
    }
    else    cout<<"NO\n";
    return 0;
}