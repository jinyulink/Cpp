//Author: Jinyulink
//https://zerojudge.tw/ShowProblem?problemid=e507
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        string x;
        for(int i=0;i<a.length();i++)
        {
            for(int j=0;j<b.length();j++)
            {
                if(a[i]==b[j])
                {
                    x.push_back(a[i]);
                    b[j]='X';
                    break;
                }
            }
        }
        sort(x.begin(),x.end());
        cout<<x<<endl;
    }
    return 0;
}