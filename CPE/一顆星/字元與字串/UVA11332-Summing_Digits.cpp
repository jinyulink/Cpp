//Author: Jinyulink
//https://zerojudge.tw/ShowProblem?problemid=c813
#include<bits/stdc++.h>
using namespace std;
int g(string s)
{
    int result=0;
    for(int i=0;i<s.length();i++)
    {
        stringstream ss;
        int n;
        ss<<s[i];
        ss>>n;
        result+=n;
    }
    s=to_string(result);
    if(s.length()>1)
    {
        result=g(s);
    }
    return result;
}
int main()
{
    string s;
    while(cin>>s)
    {
        if(s[0]=='0')
            break;
        cout<<g(s)<<endl;
    }
    return 0;
}