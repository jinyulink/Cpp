//Author: Jinlk
//https://codeforces.com/contest/1637/problem/B
//���R�G�Nɲ�̤j�����k�@�w�O�C?�������@�q�C??�C? [����] ?�� [����] ��??�A�C?��L?�r?�� [����] ��??�C�e�����D�A??��\�E���A����?��?����צn�C
#include<bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0);cin.tie(0)
#define vt vector
#define pb push_back
using namespace std;
int main()
{
    IO;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)    cin>>a[i];
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j+i<=n;j++)
            {
                for(int k=j;k<j+i;k++)
                {
                    if(a[k]==0) ans+=1;
                    ans+=1;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}