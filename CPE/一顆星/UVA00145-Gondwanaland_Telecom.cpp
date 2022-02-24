/*******************************************************/
/* https://zerojudge.tw/ShowProblem?problemid=d089     */
/* UVa 145 Gondwanaland Telecom                        */
/* Author: Jinyulink                                   */
/* Date: 2021/09/12(SUN)                               */
/*******************************************************/
#include<bits/stdc++.h>
using namespace std;
char dis;
string number; //phone_number
int tc1,tm1,tc2,tm2; //clock_1 minute_1
double charge; // charged money
//        0am - 8am - 18pm -22pm -8am -18pm -22pm -24pm   分七個時段(兩天)
int day[8]={0, 480, 1080, 1320, 1920, 2520, 2760, 2880};
int main()
{
    map <char, vector<double>> mp;
    mp['A']={0.1,0.06,0.02};
    mp['B']={0.25,0.15,0.05};
    mp['C']={0.53,0.33,0.13};
    mp['D']={0.87,0.47,0.17};
    mp['E']={1.44,0.80,0.30};
    while(cin>>dis)
    {
        if(dis=='#')   break;
        cin>>number>>tc1>>tm1>>tc2>>tm2;
        int time1=tc1*60+tm1; //start_time
        int time2=tc2*60+tm2; //end_time
        int time[7]; //night day evening night day evening night
        memset(time,0,sizeof(time));
        int x=0;
        if(time1>time2)
            time2+=24*60;
        else if(time1==time2)
            time2+=24*60;
        int t=time2-time1;
        for(int j=1;j<8;j++)
        {
            if(day[j]>time1)
            {
                x=j;
                break;
            }
        }
        for(int i=x;i<7;i++)
        {
            if(i==x)
            {
                if(t>day[i]-time1)
                {
                    time[i-1]=day[i]-time1;
                    t=t-day[i]+time1;
                }
                else if(t<=day[i]-time1)
                {
                    time[i-1]=t;
                    t-=t;
                    break;
                }
            }
            else
            {
                if(t>day[i]-day[i-1])
                {
                    time[i-1]=day[i]-day[i-1];
                    t=t-day[i]+day[i-1];
                }
                else if(t<=day[i]-day[i-1])
                {
                    time[i-1]=t;
                    t-=t;
                    break;
                }
            }
        }
        int time_day[3]={time[1]+time[4],time[2]+time[5],time[0]+time[3]+time[6]}; // day evening night
        charge=time_day[0]*mp[dis][0]+time_day[1]*mp[dis][1]+time_day[2]*mp[dis][2];
        cout<<setw(10)<<number<<setw(6)<<time_day[0]<<setw(6)<<time_day[1]<<setw(6)<<time_day[2]<<setw(3)<<dis<<setw(8)<<fixed<<setprecision(2)<<charge<<endl;
    } 
    return 0;
}