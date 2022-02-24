//Author: Jinyulink
//https://zerojudge.tw/ShowProblem?problemid=c007
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	bool c=true;
	while(getline(cin,s))
	{
		
		for(int i=0;i<s.length();i++)
		{
			if(c&&s[i]=='\"')
			{
				cout<<"``";
				c=false;
			}
			else if(!c&&s[i]=='\"')
			{
				cout<<"\'\'";
				c=true;
			}
			else
				cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
} 