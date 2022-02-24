//Author: Jinlk
//https://jinlk.site
#include<bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0);cin.tie(0)
#define vt vector
#define pb push_back

using namespace std;

const int maxn = 1e5 + 50;
int a[maxn];
int n,m;

int main(){
    IO;
	while(cin>>m)
    {
        vt<int> v;
        int aa=1;
        n=0;
        while(aa<m)
        {   
            aa*=2;
            n++;
        }
        for(int i=n;i>=0;i--)
        {
            if(m>=pow(2,i))
            {
                v.pb(1);
                m-=pow(2,i);
            }
            else v.pb(0);
        }
        int s=0;
        for (auto it = v.begin(); it != v.end(); ++it)
        {
            if(*it==1)  s++;
            if(s>0) cout<<*it;
        }
        cout<<'\n';
    }
    return 0;
}