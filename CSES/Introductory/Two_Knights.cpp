//Author: Jinlk
//https://cses.fi/problemset/task/1072
#include<bits/stdc++.h>
#define ull unsigned long long 
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        ull int all=i*i; //格子數量
        ull int c=all*(all-1)/2; //共有c種選擇來放置兩個棋
        ull int d=4*(i-1)*(i-2); //須被扣除的擺法
        ull int ans=c-d;
        cout<<ans<<endl;
    }
    return 0;
}