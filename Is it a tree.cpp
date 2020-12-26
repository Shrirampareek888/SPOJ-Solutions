#include<bits/stdc++.h>
using namespace std;
int c=0;
void dfs(int v,vector<int> g[],bool *vis)
{
    vis[v]=true;
    c++;
    for(int i=0;i<g[v].size();i++)
    {
        if(vis[g[v][i]]==false)
            dfs(g[v][i],g,vis);
    }
}
int main()
{
    int n,m,i;
    cin>>n>>m;
    vector<int> g[n+1];
    for(i=0;i<m;i++)
    {
        int p,q;
        cin>>p>>q;
        g[p].push_back(q);
        g[q].push_back(p);
    }
    if(m+1!=n)
        cout<<"NO";
    else{
    bool vis[n+1];
    memset(vis,false,sizeof(vis));
    dfs(1,g,vis);
    if(c==n)
        cout<<"YES";
    else
    cout<<"NO";
    }
    return 0;
}
