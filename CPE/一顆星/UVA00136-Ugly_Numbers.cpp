/*******************************************************/
/* https://zerojudge.tw/ShowProblem?problemid=d129     */
/* UVa 136 Ugly Numbers                                */
/* Author: Jinyulink                                   */
/* Date: 2021/09/05(SUN)                               */
/*******************************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
   unsigned long long int data[1505];
   data[0]=1;
   int t=1;
   int c[3];
   for(int i=0;i<1499;i++)
   {
       for(int j=0;j<t;j++)
       {
           if(data[j]*2>data[t-1])
           {
               c[0]=data[j]*2;
               break;
           }
       }
       for(int j=0;j<t;j++)
       {
           if(data[j]*3>data[t-1])
           {
               c[1]=data[j]*3;
               break;
           }
       }
       for(int j=0;j<t;j++)
       {
           if(data[j]*5>data[t-1])
           {
               c[2]=data[j]*5;
               break;
           }
       }
       sort(c,c+3);
       data[t]=c[0];
       t++;
   }
   cout<<"The 1500'th ugly number is "<<data[1499]<<"."<<endl;
   return 0;
}