//https://zerojudge.tw/ShowProblem?problemid=d091
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char r;
    float coor[40];
    int c=0;
    int point=0;
    while(cin>>r)
    {
        if(r=='r')
        {
            cin>>coor[c];
            cin>>coor[c+1];
            cin>>coor[c+2];
            cin>>coor[c+3];
            c+=4; 
        }
        else if(r=='*')
        {
            float x,y;
            while(cin>>x>>y)
            {
                if(x>=9999.9&&y>=9999.9)
                {
                  break;
                }
                point++;
                int o=0;
                bool p=false;
                for(int i=0;i<(c/4);i++)
                {
                    bool a=false;
                    if(x>coor[o]&&x<coor[o+2])
                    {
                        if(y<coor[o+1]&&y>coor[o+3])
                        {
                            a=true;
                            p=true;
                        }
                    }
                    if(a)
                    {
                        cout<<"Point "<<point<<" is contained in figure "<<i+1<<endl;
                    }
                    o+=4;
                }
                if(!p)
                {
                    cout<<"Point "<<point<<" is not contained in any figure "<<endl;
                }
            }
            break;
        }
    }   
    return 0;
}