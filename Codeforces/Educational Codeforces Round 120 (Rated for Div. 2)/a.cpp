#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ull int l[3];
        int odd=0;
        int even=0;
        int ans=0;
        for(int i=0; i<3; i++)
        {
            cin>>l[i];
            if(l[i]%2==0)
                even++;
            else
                odd++;
        }
        sort(l,l+3);
        if(l[1]==l[2])
        {
            if(l[0]%2==0)
                ans=1;
        }
        else if(l[1]==l[0])
        {
            if(l[2]%2==0)
                ans=1;
        }
        else if(l[0]+l[1]==l[2])
        {
            ans=1;
        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}