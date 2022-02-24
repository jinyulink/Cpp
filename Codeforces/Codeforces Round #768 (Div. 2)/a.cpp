//Author: Jinlk
//https://codeforces.com/contest/1631/problem/A
#include<bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0);cin.tie(0)
#define vt vector
#define pb push_back
#define ull unsigned long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0; i<n; i++)  cin>>a[i];
        for(int i=0; i<n; i++)  cin>>b[i];
        for(int i=0; i<n; i++)
        {
            if(b[i]>a[i])   swap(a[i],b[i]);
        }
        cout<<*max_element(a,a+n)**max_element(b,b+n)<<endl;
    }
    return 0;
}