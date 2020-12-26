#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define intmax INT_MAX
#define deb(x) cout << #x << "=" << x << endl
const ll llmax = 19223372036859;
ll cntr;
void join(vector<ll> &a, ll s, ll m, ll e)
{
	ll i = s, j = m + 1, k = s;
	ll temp[a.size()];
	while (i <= m && j <= e)
	{
		if (a[i] <= a[j])
		{
			temp[k++] = a[i++];
		}
		else {
			cntr += (m + 1) - i;
			temp[k++] = a[j++];
		}
	}
	while (i <= m)
		temp[k++] = a[i++];
	while (j <= e)
		temp[k++] = a[j++];
	for (i = s; i <= e; i++)
	{
		a[i] = temp[i];
	}
}
void part(vector<ll> &a, ll s, ll e)
{
	if (s >= e)
		return;
	ll m = (s + e) / 2;
	part(a, s, m);
	part(a, m + 1, e);
	join( a, s, m, e);
}
void solve()
{
	ll n, i;
	cin >> n;
	vector<ll> a;
	for (i = 0; i < n; i++)
	{
		ll x; cin >> x;
		a.push_back(x);
	}
	part( a, 0, n - 1);
	cout << cntr << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t = 1;
	cin >> t;
	while (t--) {
		cntr = 0;
		solve();
	}
}