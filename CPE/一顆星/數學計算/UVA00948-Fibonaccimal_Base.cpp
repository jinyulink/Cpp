//Author: Jinyulink UNFINISHED
//https://zerojudge.tw/ShowProblem?problemid=a134
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        int sum=0,m=0,i;
        for(int i=0;i<s.length();i++){
            int d=0;
            if(s[i]>='0'&&s[i]<='9'){
                d+=s[i]-'0';
            }
            if(s[i]>='A'&&s[i]<='Z'){
                d+=s[i]-'A'+10;
            }
            if(s[i]>='a'&&s[i]<='z'){
                d+=s[i]-'a'+36;
            }
            m=max(m,d);
            sum+=d;
        }
        bool c=true;
        for(i=m;i<62;i++){
            if(sum%i==0){
                cout<<i+1<<'\n';
                c=false;
                break;
            }
        }
        if(c)
            cout<<"such number is impossible!"<<endl;
    }
    return 0;
}