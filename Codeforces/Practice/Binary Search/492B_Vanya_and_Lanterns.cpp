//Author: Jinyulink
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l; //n=number of lanterns, l=street length
    cin>>n>>l; 
    vector<int> a(n); //array store each position lanterns placed
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    double d=0; //difference between each element
    bool s=false; //start
    bool e=false; //end
    for(int i=1;i<n;i++)
    {
        if((a[i]-a[i-1])>d&&a[i]!=a[i-1])
            d=(a[i]-a[i-1]);
        
        if(a[i]==0)
            s=true;
        else if(a[i]==l)
            e=true;
    }
    double res=d/2; //result
    int res1=0,res2=0;
    if(!s)
    {
        if((a[0]-0)>res)
            res=a[0]-0;
    }

    if(!e)
    {
        if((l-a[n-1])>res)
            res2=l-a[n-1];
    }

    if(res>res2)
        res=res;
    else if(res<res2)
        res=res2;
    cout<<fixed<<res<<endl;  
    return 0;
}