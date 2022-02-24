//Author: Jinlk
//https://cses.fi/problemset/task/1617
//Binary Exponentiation
#include<bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<binpow(2,n,pow(10,9)+7);
    return 0;
}