#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ull int n,k,x;
        cin>>n>>k>>x;
        string s;
        cin>>s;
        ull int c=0,cc=0;
        vector<int> ccc;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='*'&&!cc&&i>0&&s[i]!=s[i-1])
            {
                c++;
                cc=1;
                ccc.push_back(1);
            }
            else if(i==0&&s[i]=='*')
            {
                c++;
                cc=1;
                ccc.push_back(1);
            }
            else if(s[i]!='*'&&i==0)
            {
                cc=0;
                c++;
                ccc.push_back(-1);
            }    
            else if(s[i]!='*'&&cc&&i>0&&s[i]!=s[i-1])
            {
                c++;
                cc=0;
                ccc.push_back(-1);
            }
            else if(cc)
                ccc[c-1]++;
            else if(!cc)
                ccc[c-1]--;
        }
        ull int z;
        for(int i=0;i<c;i++)
        {
            if(ccc[i]>0)
            {    
                ccc[i]=ccc[i]*k+1;
                z=i;
            }
            /*cout<<ccc[i]<<" ";*/  
        }
        string res;
        for(int i=c-1;i>=0;i--)
        {
            if(ccc[i]<0)
            {
                for(int j=0;j>ccc[i];j--)
                    res.push_back('a');
            }
            else if(ccc[i]>0)
            {
                    ull int a=x%ccc[i];
                    if(a==0)
                        a+=ccc[i];
                    for(int j=0;j<a-1;j++)
                        res.push_back('b');
                    x-=x%ccc[i];
                    x=x/ccc[i];
            }
        }
        for(int i=res.length()-1;i>=0;i--)
        {
            cout<<res[i];
        }
        cout<<endl;
    }
    return 0;
}