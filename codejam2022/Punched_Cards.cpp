//Author: Jinlk
//https://codingcompetitions.withgoogle.com/codejam/round/0000000000876ff1/0000000000a4621b
#include<bits/stdc++.h>
#define IO cin.tie(0);ios_base::sync_with_stdio(false)
using namespace std;
int main()
{
    IO;
    int t,h; cin>>t;
    h=t;
    while(t--)
    {
        int r,c;
        cin>>r>>c;
        cout<<"Case #"<<h-t<<":\n";
        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                if(i==1&&j==1)  cout<<"..";
                else    cout<<"+-";
            }
            cout<<"+"<<'\n';
            for(int j=1;j<=c;j++)
            {
                if(i==1&&j==1)  cout<<"..";
                else    cout<<"|.";
            }
            cout<<"|\n";
        }
        for(int i=1;i<=c;i++)
        {
            cout<<"+-";
        }
        cout<<"+\n";
    }
    return 0;
}