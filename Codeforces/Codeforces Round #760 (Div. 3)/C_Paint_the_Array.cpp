//Author: Jinyulink
//https://codeforces.com/contest/1618/problem/C
#include<bits/stdc++.h>
#define ull unsigned long long 
using namespace std;
int f( int a, int b ) //¤½¦]¼Æ
{
    if( b==0 )
        return a;
    return f( b, a%b );
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ull int a[n/2+1];
        ull int b[n/2];
        for(int i=0; i<n; i++)
        {
            if(!(i%2))
                cin>>a[i/2];
            else
                cin>>b[i/2];
        }
        sort(a,a+n/2+1);
        sort(b,b+n/2);
        for(int i=0; i<n; i++)
    }
    return 0;
}