/*******************************************************/
/* https://codeforces.com/contest/1566/problem/0       */
/* A. Median Maximization                              */
/* Author: Jinyulink                                   */
/* Date: 2021/09/12(SUN)                               */
/*******************************************************/
#include<bits/stdc++.h>
using namespace std;
unsigned long long int n,s;
int t;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        cout<<s/((n+2)/2)<<endl;
    } 
    return 0;
}
/* 想法: 給n個數  加總起來為s  
   1.讓中位數前的每一位數字設為0   
   2.將s平均分配給剩餘位數

   舉例: n=7 s=17
   0 0 0 中 x x x
   將s/(7-3)=4 此即為中位數最大解

   舉例: n=6 s=15
   0 0 中 x x x
   將s/(6-2)=3
*/ 