//Author: Jinyulink UNFINISHED
//https://zerojudge.tw/ShowProblem?problemid=f444
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    while(cin>>x)
    {
        vector<int> a;
        int aa;
        unsigned long long int ans=0;
        while(cin>>aa)
            a.push_back(aa);
        //for(int i=0;i<2;i++)    cin>>a[i];
        //reverse(a.begin(), a.end());
        cout<<sizeof(a)/sizeof(a[0])<<endl;
        for(int i=1;i<a.size();i++)
        {
            ans+=pow(x,i-1)*a[i];
            cout<<ans<<" <"<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}