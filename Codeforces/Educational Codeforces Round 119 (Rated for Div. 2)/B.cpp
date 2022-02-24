#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,h;
        cin>>w>>h;
        w=abs(w);
        h=abs(h);
        ll int x1,x2,y1,y2;
        cin>>x1;
        ll int xx1[x1];
        for(int i=0; i<x1; i++)
            cin>>xx1[i]; //xx1[i],0
        for(int i=0; i<x1; i++)
            xx1[i]=abs(xx1[i]); 
        sort(xx1,xx1+x1);
        cin>>x2;
        ll int xx2[x2];
        for(int i=0; i<x2; i++)
            cin>>xx2[i]; //xx1[i],h
        for(int i=0; i<x2; i++)
            xx2[i]=abs(xx2[i]); 
        sort(xx2,xx2+x2);
        cin>>y1;
        ll int yy1[y1];
        for(int i=0; i<y1; i++)
            cin>>yy1[i]; //0,yy1[i]
        for(int i=0; i<y1; i++)
            yy1[i]=abs(yy1[i]); 
        sort(yy1,yy1+y1);    
        cin>>y2;
        ll int yy2[y2];
        for(int i=0; i<y2; i++)
            cin>>yy2[i]; //5,yy2[i]
        for(int i=0; i<y2; i++)
            yy2[i]=abs(yy2[i]); 
        sort(yy2,yy2+y2);    
        ll int area[4];
        area[0]=(xx1[x1-1]-xx1[0])*h;
        area[1]=(xx2[x2-1]-xx2[0])*h;
        area[2]=(yy1[y1-1]-yy1[0])*w;
        area[3]=(yy2[y2-1]-yy2[0])*w;
        sort(area,area+4);
        cout<<area[3]<<endl;
    }
    return 0;
}
