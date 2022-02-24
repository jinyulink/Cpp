//Author: Jinyulink
//https://zerojudge.tw/ShowProblem?problemid=e555
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    unsigned long long int d;
    while(cin>>s>>d)
    {
        unsigned long long int dd=0;
        for(int i=1;i<d;i++)
        {
            dd+=s;
            s++;
            if(dd>=d){
                cout<<s-1<<endl;
                break;
            }
        }
    }
    return 0;
}