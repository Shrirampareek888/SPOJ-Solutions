#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define intmax INT_MAX
#define deb(x) cout << #x << "=" << x << endl
const ll llmax = 19223372036859;
ll calc(ll n)
{
	ll i, res = n;
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			res /= i;
			res *= i - 1;
			while (n % i == 0)
			{
				n /= i;
			}
		}
	}
	if (n != 1)
	{
		res /= n; res *= n - 1;
	}
	return res;
}
void solve()
{
	ll n;
	cin >> n;
	cout << calc(n) << endl;
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