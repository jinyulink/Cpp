#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        bool c=1;
        int k=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='N')
                k++;
        }
        if(k==1)    c=false;
        if(c)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}