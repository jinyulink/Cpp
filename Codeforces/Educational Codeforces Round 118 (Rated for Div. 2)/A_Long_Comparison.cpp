/*******************************************************/
/* https://codeforces.com/contest/1613/problem/A       */
/* A. Long Comparison                                  */
/* Author: Jinyulink                                   */
/* Date: 2021/12/02(WEN)                               */
/*******************************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int x1,p1,x2,p2;
        long double res1,res2;
        cin>>x1>>p1>>x2>>p2;
        if(p1<p2)
        {
            res1=x1/pow(10,p2-p1);
            res2=x2;
        }
        else if(p1>p2)
        {
            res2=x2/pow(10,p1-p2);
            res1=x1;
        }
        else
        {
            res1=x1;
                res2=x2;
        }

        if(res1>res2)
            cout<<">"<<endl;
        else if(res1<res2)
            cout<<"<"<<endl;
        else
            cout<<"="<<endl;
    }
    return 0;
}