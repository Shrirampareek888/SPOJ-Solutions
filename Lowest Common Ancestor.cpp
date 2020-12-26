#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define db double
#define all(x) x.begin(),x.end()
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define intmax INT_MAX
#define deb(x) cout << #x << "=" << x << endl
const ll llmax = 19223372036859;
const db PI = 3.14159265358979323846264338327950288419716939937510;
int par[1005]; bool vis[1005]; int dist[1005];
void dfs(vector<int> g[], int src, int cnt)
{
	vis[src] = true;
	dist[src] = cnt;
	for (auto x : g[src])
	{
		if (vis[x] == false)
		{
			dfs(g, x, cnt + 1);
		}
	}
}
void solve()
{
	ll n, i; cin >> n;
	vector<int> g[n + 1];
	for (i = 0; i < 1005; i++)
	{
		par[i] = 0; vis[i] = false; dist[i] = 0;
	}
	for (i = 0; i < n; i++)
	{
		ll x; cin >> x;
		while (x--)
		{
			ll v; cin >> v;
			par[v] = i + 1;
			g[v].push_back(i + 1);
			g[i + 1].push_back(v);
		}
	}
	dfs(g, 1, 0);
	ll q; cin >> q;
	while (q--)
	{
		ll a, b; cin >> a >> b;
		if (dist[a] >= dist[b])
		{
			ll c = b; b = a; a = c;
		}
		ll d = dist[b] - dist[a];
		while (d--)
		{
			b = par[b];
		}
		if (a == b)
		{
			cout << a << endl;
			continue;
		}
		else {
			while (par[a] != par[b])
			{
				a = par[a]; b = par[b];
			}
			cout << par[a] << endl;
			continue;
		}
	}

}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t = 1;
	cin >> t;
	int c = 1;
	while (t--) {
		cout << "Case " << c << ":" << endl;
		solve();
		c++;
	}
}