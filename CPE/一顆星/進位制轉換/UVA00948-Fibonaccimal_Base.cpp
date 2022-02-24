//Author: Jinyulink
//https://zerojudge.tw/ShowProblem?problemid=a134
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f[39];
    for(int i=0; i<39; i++)
    {
        if(i==0) f[i]=1;
        if(i==1) f[i]=2;
        if(i>1) f[i]=f[i-1]+f[i-2];
    }
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        cout<<n<<" = ";
        bool c=false;
        for(int i=38;i>=0;i--)
        {
            if(n>=f[i])
            {
                cout<<1;
                n-=f[i];
                c=true;
            }
            else if(n<f[i]&&c)
                cout<<0;
        }
        cout<<" (fib)"<<endl;
    }
    return 0;
}