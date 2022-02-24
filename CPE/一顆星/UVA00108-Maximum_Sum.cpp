/*******************************************************/
/* https://zerojudge.tw/ShowProblem?problemid=d206     */
/* UVa 108 Maximum Sum                                 */
/* Author: Jinyulink                                   */
/* Date: 2021/09/06(MON)                               */
/*******************************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans,total=0;
    cin>>n;
    int data[n+1][n+1];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>data[i+1][j+1];
    int sum[n+2][n+2];
    memset(sum,0,sizeof(sum));
    sum[1][1]=data[1][1];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
                sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+data[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
                total=
    return 0;
}