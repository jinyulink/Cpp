//Author: Jinyulink
//https://zerojudge.tw/ShowProblem?problemid=c045
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s[100];
    int i=0,m=0;
    while(getline(cin,s[i]))
    {
        i++;
        if(s[i].length()>m)
            m=s[i].length();
    }
    for(int k=0;k<m;k++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(k<s[j].length())
                cout<<s[j][k];
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}