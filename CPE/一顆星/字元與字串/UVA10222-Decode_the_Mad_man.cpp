//Author: Jinyulink
//https://zerojudge.tw/ShowProblem?problemid=e578
#include<bits/stdc++.h>
using namespace std;
string a="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./ ";
string b="234567890-=`1ertyuiop[]\\qwdfghjkl;'ascvbnm,./zx ";
int main()
{
    string s;
    while(getline(cin,s))
    {
        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<a.length();j++)
            {
                if(s[i]==b[j])
                {
                    cout<<a[j];
                }
            }
        }
        cout<<endl;
    }
    return 0;
}