//Author: Jinyulink
//https://zerojudge.tw/ShowProblem?problemid=d097
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        ll int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int d[n]={0};
        bool c=true;
        for(int i=1; i<n; i++)
        {
            d[abs(a[i]-a[i-1])]=1;
        }
        for(int j=1;j<n;j++)
        {
            if(d[j]==0)
            {
                cout<<"Not jolly"<<endl;
                c=false;
                break;
            }
        }
        if(c)   cout<<"Jolly"<<endl;
    }
    return 0;
}