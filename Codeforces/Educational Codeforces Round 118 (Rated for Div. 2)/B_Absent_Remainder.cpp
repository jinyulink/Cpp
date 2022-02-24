/*******************************************************/
/* https://codeforces.com/contest/1613/problem/B       */
/* B. Absent Remainder                                 */
/* Author: Jinyulink                                   */
/* Date: 2021/12/02(WEN)                               */
/*******************************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    { 
        cin>>n;
        int ans=n/2;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=1;i<ans+1;i++)
        {
              cout<<a[i]<<" "<<a[0]<<endl;
        }
    }
    return 0;
}