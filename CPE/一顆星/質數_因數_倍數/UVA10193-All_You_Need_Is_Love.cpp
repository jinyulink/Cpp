//Author: Jinyulink
//https://zerojudge.tw/ShowProblem?problemid=d306
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        string a,b;
        cin>>a>>b;
        unsigned long long int aa,bb;
        int n=0;
        for(int i=0;i<a.length();i++)
        {
            n=n*2+(a[i]-'0');
        }
        aa=n;
        n=0;
        for(int i=0;i<b.length();i++)
        {
            n=n*2+(b[i]-'0');
        }
        bb=n;
        cout<<aa<<" "<<bb<<endl;
    }
    return 0;
}