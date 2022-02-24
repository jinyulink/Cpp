//Author: Jinyulink
//https://codeforces.com/problemset/problem/230/B
#include<bits/stdc++.h>
using namespace std;
int a[1000000]={0};
void prime_check(void);//Seive of Eratosthenes 判斷質數 a[x]=0的話 n就是質數
int main()
{
    int n;
    cin>>n;
    prime_check();
    while(n--) 
    {
        long long int x;
        cin>>x;
        long long int s=sqrt(x); // sqrt 
        if((s*s)==x&&x!=1&&!a[s])
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
void prime_check(void)
{
    for(int i=2;i<=1000000;i++)
    {
        if(a[i]==0)
        {
            for(int j=2;i*j<=1000000;j++)
                a[i*j]=1;
        }
    }
}