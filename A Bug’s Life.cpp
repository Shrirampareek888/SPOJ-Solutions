#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f = 0, cnt = 1;
void calc(ll v, vector<ll> g[], ll vis[], ll mark[], ll lmt)
{
	queue<ll> q;
	q.push(v);
	vis[v] = 1;
	ll i;
	while (!q.empty())
	{
		ll temp = q.front();
		mark[temp] = 1;
		for (i = 0; i < g[temp].size(); i++)
		{
			if (vis[g[temp][i]] == -1)
			{
				vis[g[temp][i]] = 1 - vis[temp];
				q.push(g[temp][i]);
			}
			else if (vis[g[temp][i]] == vis[temp])
			{
				f = 1; return;
			}
		}
		q.pop();
	}
	for (i = 0; i < lmt; i++)
	{
		if (mark[i] == 0)
		{
			mark[i] = 1;
			calc(i, g, vis, mark, lmt);
		}
	}
}
void solve()
{
	f = 0;
	ll i, n, e;
	cin >> n >> e;
	vector<ll> g[n + 1];
	for (i = 0; i < e; i++)
	{
		ll x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	ll vis[n + 1];
	memset(vis, -1, sizeof(vis));
	vis[1] = 1;
	ll mark[n + 1];
	memset(mark, 0, sizeof(mark));
	mark[0] = 1; mark[1] = 1;
	calc(1, g, vis, mark, n + 1);
	printf("Scenario #%d:\n", cnt);
	if (f == 1)
		printf("Suspicious bugs found!\n");
	else
		printf("No suspicious bugs found!\n");
	cnt++;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}