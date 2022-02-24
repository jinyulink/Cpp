#include <bits/stdc++.h>
using namespace std;
long long temp_arr[200001][20];
int main(){
    for(int i = 1; i <= 200000; i++){
        long long temp = i;
        long long idx = 0;
        while(temp){
            temp_arr[i][idx++] += (temp%2);
            temp/=2;
        }
        for(int j = 0; j < 20; j++){
            temp_arr[i][j] += temp_arr[i-1][j];
        }
    }
    int t;
    cin>>t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        vector<long long> temp(20, 0);
        long long max_ = 0;
        for(int i = 0; i < 20; i++){
            max_=max(max_,temp_arr[r][i]-temp_arr[l-1][i]);
        }
        cout<<(r-l+1-max_)<<'\n';
    }
    return 0;
}