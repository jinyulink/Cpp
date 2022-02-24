//Author: Jinyulink
//https://zerojudge.tw/ShowProblem?problemid=c044
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,total=0;
    cin>>n;
    int ch[26]={0};
    n++;
    while(n--)
    {
        string s;
        getline(cin,s);
        for(int i=0; i<s.length(); i++)
        {   
            if(s[i]>='a'&&s[i]<='z'){
                ch[s[i]-'a']++;
                total++;}
            else if(s[i]>='A'&&s[i]<='Z'){
                ch[s[i]-'A']++;
                total++;}
        }
    }
        for(int j=total;j>0;j--)
        {
            for(int i=0;i<26;i++)
            {
                if(ch[i]==j)
                {
                    cout<<(char)(i+'A')<<" "<<j<<endl;
                }
            }
        }
    return 0;
}