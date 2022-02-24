/*******************************************************/
/* https://zerojudge.tw/ShowProblem?problemid=a737     */
/* UVa 10041  Vito's family                            */
/* Author: Jinyulink                                   */
/* Date: 2021/09/13(MON)                               */
/*******************************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--) {
		int r;
		cin>>r;
		vector<int> s(r);
		for(int i=0;i<r;i++)
			cin>>s[i];
		sort(s.begin(),s.end());
		long long int middle=s[r/2];
		long long int ans=0;
		for(int i=0;i<r;i++)
			ans+=abs(middle-s[i]);
		cout<<ans<<endl;
	}
	return 0;
}