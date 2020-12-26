#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define intmax INT_MAX
#define deb(x) cout << #x << "=" << x << endl
const ll llmax = 19223372036859;
void calc(ll n, ll k)
{
	unsigned long long res = 1;
	if (k > n - k)
		k = n - k;
	for (ll i = 0; i < k; i++)
	{
		res *= (n - i);
		res /= (i + 1);
	}
	cout << res << endl;
}
void solve()
{
	ll n, k;
	cin >> n >> k;
	if (n == k)
		cout << "1" << endl;
	else
		calc(n - 1 , k - 1 );
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
		solve();
	}
}