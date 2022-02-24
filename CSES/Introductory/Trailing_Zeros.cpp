//Author: Jinlk
//https://cses.fi/problemset/task/1618
//https://www.geeksforgeeks.org/count-trailing-zeroes-factorial-number/
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main()
{
    ull int n;
    cin>>n;
    int res=0;
    for(int i=5;n/i>=1;i*=5)
        res+=n/i;
    cout<<res<<endl;
    return 0;
}