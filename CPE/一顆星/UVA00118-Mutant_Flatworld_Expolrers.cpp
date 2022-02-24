// https://zerojudge.tw/ShowProblem?problemid=c082
#include<bits/stdc++.h>
using namespace std;
int x,y,rx,ry,a,b,p;
bool lost=false;
char d;
char dd[4]={'N','E','S','W'};
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int coor[50][50];
int main()
{
    cin>>rx>>ry;
    memset(coor,0,sizeof(coor));
    string command;
    while(cin>>x>>y>>d)
    {
        lost=false;
        cin>>command;
        for(int i=0;i<command.length();i++)
        {
            for(int i=0;i<4;i++)
            {
                if(dd[i]==d)
                {
                    p=i;
                }
            }
            if(command[i]=='L')
            {
                p--;
                if(p<0)
                {
                    p+=4;
                }
                d=dd[p];
            }
            else if(command[i]=='R')
            {
                p++;
                if(p>3)
                {
                    p-=4;
                }
                d=dd[p];
            }
            else if(command[i]=='F')
            {
                a=x;
                b=y;
                int c=x+dx[p];
                int d=y+dy[p];
                if(coor[a-1][b-1]==1)
                {
                    if(c>rx||c<0)
                    {
                        x=x;
                        y=y;
                    }
                    else if(d>ry||d<0)
                    {
                        y=y;
                        x=x;
                    }
                    else
                    {
                        x+=dx[p];
                        y+=dy[p];
                    }
                }
                else
                {
                    x+=dx[p];
                    y+=dy[p];
                }

                if(x>rx||y>ry||x<0||y<0)
                {
                    coor[a-1][b-1]=1;
                    lost=true;
                    break;
                }
            }
        }
        if(lost)
        {
            cout<<a<<" "<<b<<" "<<dd[p]<<" LOST"<<endl;
        }
        else
        {
            cout<<x<<" "<<y<<" "<<dd[p]<<endl;
        }
    }
    return 0;
}