//Author: Jinlk
//https://cses.fi/problemset/task/1622
//next_permutation
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    vector<string> ans;
    sort(n.begin(), n.end());
    do{
        ans.push_back(n); //
    }while(next_permutation(n.begin(), n.end()));
    cout<<ans.size()<<endl;
    for(string a : ans) cout<<a<<endl;
    return 0;
}