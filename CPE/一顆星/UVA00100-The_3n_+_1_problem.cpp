#include<bits/stdc++.h>
using namespace std;
int algorithm(int c,int cl)
{
    if(c==1)
    {
        cl++;
        return cl;
    }
    else if(c%2)
    {
        c=c*3+1; 
        cl++;
        return algorithm(c,cl);
    } 
    else
    {
        c=c/2; 
        cl++;
        return algorithm(c,cl);
    } 
}
int main()
{
    long long int a,b;
    int lcl; //longest cycle length
    while(cin>>a>>b)
    {   
        cout<<a<<" ";
        cout<<b<<" ";
        if(a>b)
        {
            int i=a;
            a=b;
            b=i;
        }
        int cl[b-a+1];
        for(int i=0;i<=b-a;i++)
        {
            cl[i]=algorithm(a+i,0);
        }
        sort(cl,cl+b-a+1);
        lcl=cl[b-a];
        cout<<lcl<<endl;
    }
    return 0;
}