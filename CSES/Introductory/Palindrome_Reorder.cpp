//Author: Jinlk
//https://cses.fi/problemset/task/1755
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int t[26]={0};
    for(unsigned int i=0; i<n.length();i++)
    {
        t[n[i]-'A']++;
    }
    int odd=0;
    int oddd=0;
    for(int i=0;i<26;i++)
    {
        if(t[i]%2)
        {
            odd++;
            oddd=i;
        }
    }
    string res;
    if(odd>1)   cout<<"NO SOLUTION\n";
    else
    {
        for(int i=0;i<26;i++)
        {
            for(int j=0;j<t[i]/2;j++)
            {
                res.push_back('A'+i);
            }
        }
        if(odd==1)   res.push_back('A'+oddd);
        int h=1;
        if(odd==1)  h=2;
        for(int i=res.length()-h;i>=0;i--)
        {
            res.push_back(res[i]);
        }
    }
    cout<<res;
    return 0;
}