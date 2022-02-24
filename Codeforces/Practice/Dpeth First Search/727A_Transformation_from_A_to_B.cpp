//Author: Jinlk
//https://codeforces.com/contest/727/problem/A
//DFS
#include<bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0);cin.tie(0);
#define ull unsigned long long
#define vt vector
#define pb push_back
using namespace std;
ull int a,b,res=1;
ull int x[30];

int dfs()
{
    if(a==b)    return 1;
    if(a*2<=b)
    {
        a*=2;
        x[res-1]=a;
        res++;
        if(dfs())   return 1;
        a/=2;
        res--;
    }
    else    return 0;
    if((a*10+1)<=b)
    {
        a=a*10+1;
        x[res-1]=a;
        res++;
        if(dfs())   return 1;
        a=(a-1)/10;
        res--;
    }
    else    return 0;
    return 0;
}
int main()
{
    IO
    cin>>a>>b;
    ull int c=a;
    if(!dfs())  cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        cout<<res<<endl;
        cout<<c;
        for(int i=0;i<res-1;i++)  cout<<" "<<x[i];
        cout<<endl;
    }
    return 0;
}