//Author: Jinlk
//https://codingcompetitions.withgoogle.com/codejam/round/0000000000876ff1/0000000000a4672b
#include<bits/stdc++.h>
#define IO cin.tie(0);ios_base::sync_with_stdio(false)
using namespace std;
int main()
{
    IO;
    int t,k; cin>>t;
    k=t;
    while(t--)
    {
        int color[3][4],h=1000000,c[4]={1000000,1000000,1000000,1000000};
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<4;j++)
            {
                cin>>color[i][j];
                if(j==0&&color[i][j]<c[0]) c[0]=color[i][j];    
                else if(j==1&&color[i][j]<c[1]) c[1]=color[i][j];
                else if(j==2&&color[i][j]<c[2]) c[2]=color[i][j];
                else if(j==3&&color[i][j]<c[3]) c[3]=color[i][j];
            }
        }
        cout<<"Case #"<<k-t<<":";
        if((c[0]+c[1]+c[2]+c[3])<1000000)   cout<<" IMPOSSIBLE\n";
        else
        {
            for(int i=0;i<4;i++)
            {
                if(c[i]<=h) cout<<" "<<c[i];
                else    cout<<" "<<h;
                h-=c[i];
                if(h<0) h=0;
            }
            cout<<'\n';
        }
    }
    return 0;
}
