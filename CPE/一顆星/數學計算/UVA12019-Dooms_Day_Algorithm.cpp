//Author: Jinyulink
//https://zerojudge.tw/ShowProblem?problemid=f709
#include<bits/stdc++.h>
int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
using namespace std;
int main()
{
	int t;
	cin>>t;
	int M,D;
	string week[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	while(t--)
	{
		cin>>M>>D;
		int d=0;
		if(M>1)
		{
			for(int i=0;i<M-1;i++)
				d+=day[i];
			d+=D-3;
		}
		else
			d+=D-1+5;
		cout<<week[d%7]<<endl;
	}
	return 0; 
}