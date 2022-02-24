//Author: Jinlk
//https://cses.fi/problemset/task/1070
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
        cout<<"1";
    else if(n<=3)
        cout<<"NO SOLUTION";
    else    
    {
        int x=n/2;
        for(int i=1;i<=x;i++)
            cout<<i*2<<" ";
        for(int i=1;i<=x;i++)
            cout<<i*2-1<<" ";
        if(n%2)
            cout<<n;
    }
    return 0;
}