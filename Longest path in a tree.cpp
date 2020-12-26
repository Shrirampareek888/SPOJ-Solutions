#include<bits/stdc++.h>
using namespace std;
int c=0,maxm=0,las;
void dfs(int v,vector<int> g[],bool *vis)
{
    vis[v]=true;
    c++;
    if(maxm<c)
    {
        maxm=c;las=v;
    }
    for(int i=0;i<g[v].size();i++)
    {
        if(vis[g[v][i]]==false)
            dfs(g[v][i],g,vis);
    }
    c--;
}
int main()
{
    int n,i;
    cin>>n;
    vector<int> g[n+1];
    for(i=0;i<n-1;i++)
    {
        int p,q;
        cin>>p>>q;
        g[p].push_back(q);
        g[q].push_back(p);
    }
    bool vis[n+1];
    long long ans=0;
    las=1;
    for(i=1;i<=2;i++)
    {
         memset(vis,false,sizeof(vis));
        c=0;maxm=0;dfs(las,g,vis);
        if(maxm>ans)
            ans=maxm;
    }
    cout<<ans-1;
    return 0;
}
