//Author: Jinlk
//https://codeforces.com/contest/1637/problem/B
//分析：代价最大的分法一定是每?元素分一段。??每? [公式] ?有 [公式] 的??，每?其他?字?有 [公式] 的??。容易知道，??怎么划分，都不?比?种方案好。
#include<bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0);cin.tie(0)
#define vt vector
#define pb push_back
using namespace std;
int main()
{
    IO;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)    cin>>a[i];
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j+i<=n;j++)
            {
                for(int k=j;k<j+i;k++)
                {
                    if(a[k]==0) ans+=1;
                    ans+=1;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}