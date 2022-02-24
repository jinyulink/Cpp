//Author: Jinyulink
//https://codeforces.com/contest/1591/problem/0
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int t,n; //test case
    cin>>t; 
    while(t--)
    {   
        cin>>n;
        int tall=1;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {
            if(i>0&&a[i]==1&&a[i-1]==1)
            {
                tall+=5;
            }
            else if(a[i]==1)
                tall++;
            else if(i>0&&a[i]==0&&a[i-1]==0)
            {
                tall=-1;
                break;
            }
        }
        cout<<tall<<endl;
    }
    return 0;
}