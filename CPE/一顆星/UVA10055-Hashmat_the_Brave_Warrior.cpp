/*******************************************************/
/* https://zerojudge.tw/ShowProblem?problemid=a012     */
/* UVa 10055  Hashmat the Brave Warrior                */
/* Author: Jinyulink                                   */
/* Date: 2021/09/13(MON)                               */
/*******************************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    while(cin>>a>>b)
    {
        a=a-b;
        if(a<0)
            a=a*(-1);
        cout<<a<<endl;
    }
    return 0;
}