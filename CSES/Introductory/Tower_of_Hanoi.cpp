//Author: Jinlk
//https://cses.fi/problemset/task/2165
//https://www.geeksforgeeks.org/c-program-for-tower-of-hanoi/
//https://www.youtube.com/watch?v=q6RicK1FCUs
#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
    if(n==1)    return 1;
    else    return 2*count(n-1)+1;
}
void TOH(int n,int a,int b,int c)
{
    if(n>0)
    {
        TOH(n-1,a,c,b);
        cout<<a<<" "<<c<<endl;
        TOH(n-1,b,a,c);
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<count(n)<<endl;
    TOH(n,1,2,3);
    return 0;
}