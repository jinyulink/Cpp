//Author:Jinlk
//https://codeforces.com/contest/1674/problem/C
#include<bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s,t; cin>>s>>t;
        long long ans=0;
        int c=0; // 1 ¦³a
        for(int i=0;i<t.length();i++)
        {
            if(t[i]=='a')
            {
                c=1;
                break;
            }
        }
        int cc=0; // 0 ³£¬Oa
        if(c==1)
        {
            for(int i=1;i<t.length();i++)
            {
                if(t[i]!=t[i-1])
                {
                    cc=1;break;
                }
            }
        }
        if(c==1&&cc==0&&t.length()==1)   cout<<1<<'\n';
        else if(c==1&&cc==0)    cout<<-1<<'\n';
        else if(c==1&&cc==1)    cout<<-1<<'\n';
        else{
            ans=binpow(2,s.length());
            cout<<ans<<'\n';
        }
    }
    return 0;
}