/*******************************************************/
/* https://zerojudge.tw/ShowProblem?problemid=a466     */
/* UVa 12289  One-Two-Three                            */
/* Author: Jinyulink                                   */
/* Date: 2021/09/14(TUE)                               */
/*******************************************************/
#include<bits/stdc++.h>
using namespace std;
string number[3]={"one","two","three"};
int t,answer;
string input;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>input;
        int wrong=0;
        if(input.length()==3)
        {
            for(int i=0;i<2;i++)
            {
                answer=i+1;
                for(int j=0;j<3;j++)
                {
                    if(input[j]!=number[i][j])
                        wrong++;
                }
                if(wrong<=1)
                    break;
            }
        }
        else
            answer=3;
        cout<<answer<<endl;
    }
    return 0;
}