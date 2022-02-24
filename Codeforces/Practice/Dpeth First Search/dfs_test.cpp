//Author: Jinlk
//DFS https://cp-algorithms.com/graph/depth-first-search.html
#include<bits/stdc++.h>
using namespace std;
#define vt vector
#define pb push_back
int n,res=0,res1=0; // the number of vertices in the tree, result(to black), result(to white)
vt<int> color; // colori?=?0 white, colori?=?1 black
void dfs(vt<int> adj[], int v)
{
    color[v]=1;
    for(int i : adj[v])
        if(!color[i])   dfs(adj,i);
}
int main()
{
    cin>>n;
    vt<int> adj[n]; // graph represented as an adjacency list
    vt<int> color1;
    for(int i=0; i<n; i++)
    {
        int t;
        cin>>t;
        color.pb(t);
    }
    color1=color;
    for(int i=0; i<n-1; i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a-1].pb(b-1);
        adj[b-1].pb(a-1);
    }
    cout<<"==================="<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<adj[i].size();j++)
        {
            cout<<adj[i][j]+1<<" ";
        }
        cout<<endl;
    }
    // for(int i=0; i<n; i++)
    //     if(!color[i])   dfs(adj,i),res++;
    // color=color1;
    // for(int i=0; i<n; i++)
    // {
    //     if(color[i]==1)    color[i]=0;
    //     else    color[i]=1;
    // }
    // for(int i=0; i<n; i++)
    //     if(!color[i])   dfs(adj,i),res1++;
    // cout<<res<<" "<<res1<<endl;
    return 0;
}