/*******************************************************/
/* https://zerojudge.tw/ShowProblem?problemid=d235     */
/* UVa 10929  You can say 11                           */
/* Author: Jinyulink                                   */
/* Date: 2021/09/14(TUE)                               */
/*******************************************************/
#include<bits/stdc++.h>
using namespace std;
char num[1001];
int ans;
int main()
{
    memset(num,-1,sizeof(num));
    while(cin>>num)
    {
        int sum1=0,sum2=0;
        if(num[0]=='0')
            break;
        
        for(int i=0;i<1001;i++)
        {
            if((num[i]-'0')>=0)
            {
                if(i%2==0)
                    sum1+=(num[i]-'0');
                else
                    sum2+=(num[i]-'0');
            }
            else
                break;
        }
        if(sum1>sum2)
        {
            sum1-=sum2;
            ans=sum1;
        } 
        else
        {
            sum2-=sum1;
            ans=sum2;
        }

        if(ans==0||ans%11==0)
            cout<<num<<" is a multiple of 11."<<endl;
        else    
            cout<<num<<" is not a multiple of 11."<<endl;
    }
    return 0;
}