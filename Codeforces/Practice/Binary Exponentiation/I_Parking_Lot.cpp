//Author: Jinyulink
//https://codeforces.com/problemset/problem/630/I
//Binary Exponentiation
#include<bits/stdc++.h>
using namespace std;
long long int binpow(long long int a, long long int b)
{
    long long int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    long long int res=24*binpow(4,n-3)+(n-3)*36*binpow(4,n-4);
    cout<<res;
    return 0;
}