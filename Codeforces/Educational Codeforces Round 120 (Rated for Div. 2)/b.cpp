#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int p[n];
        int q[n];
        for(int i=0; i<n; i++)  cin>>p[i];
        string s;
        cin>>s;
        int zero=0;
        vector<int> zz={0};
        vector<int> o={0};
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                zero++;
                zz.push_back(p[i]);
            }
            else if(s[i]=='1')
            {
                o.push_back(p[i]);
            }
        }
        if(zero==0||zero==n)
        {
            for(int i=0;i<n;i++)
        {
            cout<<p[i]<<" ";
        }
        }
        else{
        //for(int i=0;i<zz.size();i++) cout<<zz[i]<<" ";
        sort(zz.begin(),zz.end());
        sort(o.begin(),o.end());
        int z=1;
        for(int i=0;i<zz.size();i++)
        {
            for(int j=0; j<n; j++)
            {
                if(p[j]==zz[i])
                {
                    q[j]=z;
                    z++;
                    break;
                }
            }
        }
        for(int i=0;i<o.size();i++)
        {
            for(int j=0; j<n; j++)
            {
                if(p[j]==o[i])
                {
                    q[j]=z;
                    z++;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<q[i]<<" ";
        }
        }
        cout<<endl;
    }
    return 0;
}