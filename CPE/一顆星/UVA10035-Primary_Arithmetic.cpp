//https://zerojudge.tw/ShowProblem?problemid=c014
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int a,b;
    a=1;
    b=1;
    while(true)
    {
        cin>>a>>b;
        if(a==0&&b==0)
        {
            break;
        }
        else
        {
            int aa[11],bb[11];
            memset(aa,0,sizeof(aa));
            memset(bb,0,sizeof(bb));
            int an,bn; //a,b的位數
            for(int i=1;i<=9;i++)
            {
                if(a<pow(10,i))
                {
                    an=i;
                    break;
                }
            }
            for(int i=1;i<=9;i++)
            {
                if(b<pow(10,i))
                {
                    bn=i;
                    break;
                }
            }
            int aaa=a;
            for(int i=an-1;i>=0;i--)
            {
                int z=aaa/pow(10,i);
                aa[i]=z;
                aaa-=z*pow(10,i);
            }
            int bbb=b;
            for(int i=bn-1;i>=0;i--)
            {
                int z=bbb/pow(10,i);
                bb[i]=z;
                bbb-=z*pow(10,i);
            }
            int f=bn+1;
            if(an>=bn)
            {
                f=an+1;
            }
            int o=0;
            for(int i=0;i<f;i++)
            {
                if(aa[i]+bb[i]>=10)
                {
                    aa[i+1]++;
                    o++;
                }
            }
            if(o==0)
            {
                cout<<"No carry operation."<<endl;
            }
            else if(o==1)
            {
                cout<<o<<" carry operation."<<endl;
            }
            else
            {
                cout<<o<<" carry operations."<<endl;
            }
        }
    }
    return 0;
}