#include<bits/stdc++.h>
using namespace std;
int main()
{
    int li,hi,ri,coor[10001]={0};
    int length=0;
    while(cin>>li>>hi>>ri)
    {
        for(int i=li;i<=ri;i++)
        {
            if(coor[i]<hi)
            {
                coor[i]=hi;
            }
        }
    }

    for(int i=0;i<10001;i++)
    {
        if(i==0)
        {
            cout<<0<<" "<<coor[i]<<" ";
        }

        if(coor[i+1]!=coor[i])
        {
            cout<<i+1<<" "<<coor[i+1]<<" ";
        }
    }
    cout<<endl;
    return 0; 
}