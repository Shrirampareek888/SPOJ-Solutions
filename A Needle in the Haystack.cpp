#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define intmax INT_MAX
#define deb(x) cout << #x << "=" << x << endl
const ll llmax = 19223372036859;
void solve()
{
	string a, b;
	cin >> a;
	cin >> b;
	ll i, j, k, cnt = 0;
	for (i = 0; i < b.length(); i++)
	{
		j = i; k = 0;
		while (b[j] == a[k])
		{
			j++; k++;
			if (k == a.length())
			{
				cnt++;
				cout << i << endl;
				break;
			}
		}
	}
	cout << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	while (cin >> t) {
		solve();
	}
}