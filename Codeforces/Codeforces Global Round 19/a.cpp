//Author: Jinlk
//https://codeforces.com/contest/1637/problem/A
//其實就是在看該陣列是否有序
#include<bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0);cin.tie(0)
#define vt vector
#define pb push_back
using namespace std;
int main()
{
    IO;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n],t=0;
        for(int i=0;i<n;i++)    cin>>a[i],b[i]=a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++)    if(a[i]!=b[i])  t=1;
        if(t)    cout<<"YES"<<endl;
        else    cout<<"NO"<<endl;
    }
    return 0;
}