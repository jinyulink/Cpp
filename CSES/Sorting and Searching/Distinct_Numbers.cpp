//Author: Jinlk
//https://cses.fi/problemset/task/1621
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=1;
    cin>>n;
    vector<int> x(n);
    for(int i=0; i<n; i++)  cin>>x[i];
    sort(x.begin(),x.end());
    for(int i=1; i<n; i++)
    {
        if(x[i]!=x[i-1])    ans++;
    }
    cout<<ans<<endl;
    return 0;
}