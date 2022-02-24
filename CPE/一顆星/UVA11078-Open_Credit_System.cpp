//Author: Jinlk
//https://cpe.cse.nsysu.edu.tw/cpe/file/attendance/problemPdf/11078.pdf
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int ans=-150000;
        for(int i=0; i<n; i++)  cin>>a[i];
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if((a[i]-a[j])>ans) ans=a[i]-a[j];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}