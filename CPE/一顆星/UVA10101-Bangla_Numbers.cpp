/*******************************************************/
/* https://zerojudge.tw/ShowProblem?problemid=a741     */
/* UVa 10101  Bangla Numbers                           */
/* Author: Jinyulink                                   */
/* Date: 2021/09/21(TUE)                               */
/*******************************************************/
#include <bits/stdc++.h>
using namespace std;
void bangla(unsigned long long num)
{
    if(num>=10000000)
    {
        bangla(num/10000000);
        cout<<"kuti";
        num%=10000000;
    }
    if(num>=100000)
    {
        cout<<" "<<num/100000<<" lakh";
        num%=100000;
    }
    if(num>=1000)
    {
        cout<<" "<<num/1000<<" hajar";
        num%=1000;
    }
    if(num>=100)
    {
        cout<<" "<<num/100<<" shata";
        num%=100;   
    }
    if(num!=0)
        cout<<" "<<num<<" ";
    else    
        cout<<" ";
}
int main()
{
    unsigned long long int n;
    int c=0;
    while(cin>>n)
    {
        c++;
        cout<<c<<".";
        if(n==0)    cout<<" 0"<<endl;
        else
            bangla(n);
        cout<<endl;
    }
    return 0;
}