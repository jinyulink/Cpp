//Author: Jinlk
//https://cses.fi/problemset/task/1071
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y;
        long long int z=max(x,y);
        if(y>=x)
        {
            if(y%2)
                cout<<z*z-x+1<<endl;
            else
                cout<<z*z-2*(z-1)+x-1<<endl;
        }
        else if(x>y)
        {
            if(x%2)
                cout<<z*z-2*(z-1)+y-1<<endl;
            else    
                cout<<z*z-y+1<<endl;
        }
    }
    return 0;
}