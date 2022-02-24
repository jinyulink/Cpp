/*******************************************************/
/* https://zerojudge.tw/ShowProblem?problemid=a743     */
/* UVa 10420  List of Conquests                        */
/* Author: Jinyulink                                   */
/* Date: 2021/11/23(TUE)                               */
/*******************************************************/
//用map!! 
//map+vector
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int> map;
    vector<string> country_list;
    string country,name;
    while(n--)
    {
        cin>>country;
        getline(cin,name); //不確定名字有幾個字 用getline讀入一整行字串直到換行
        if(map.count(country)) //如果country先前已存在 則+1
            map[country]++;
        else
        {
            map[country]=1;
            country_list.push_back(country);
        }  
    }
    //sort country_list in Alphabetical order
    /*string temp;
    for(int i=0;i<map.size();i++)
    {
        for(int j=i+1;j<map.size();j++)
        {
            if(country_list[i]>country_list[j])
            {
                temp=country_list[i];
                country_list[i]=country_list[j];
                country_list[j]=temp;
            }
        }
    }*/
    sort(country_list.begin(),country_list.end());
    //sort country_list in Alphabetical order
    for(int i=0;i<map.size();i++) 
        cout<<country_list[i]<<" "<<map[country_list[i]]<<endl;
    return 0;
}