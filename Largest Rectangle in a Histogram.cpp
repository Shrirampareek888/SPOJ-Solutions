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
int fg = 0;
void solve()
{
	ll n, i;
	cin >> n;
	if (n == 0) {fg = 1; return;}
	vector<ll> a(n), res, res1;
	for (i = 0; i < n; i++)
		cin >> a[i];
	stack<ll> s, s1;

	for (i = a.size() - 1; i >= 0; i--)
	{
		if (s.size() == 0)
			res.push_back(n);
		else if (s.size() > 0 && a[i] > a[s.top()])
		{
			res.push_back(s.top());
		}
		else if (s.size() > 0 && a[i] <= a[s.top()])
		{
			while (s.size() > 0 && a[i] <= a[s.top()])
				s.pop();
			if (s.size() == 0)
				res.push_back(n);
			else {
				res.push_back(s.top());
			}
		}
		s.push(i);
	}
	reverse(all(res));

	for (i = 0; i < a.size(); i++)
	{
		if (s1.size() == 0)
			res1.push_back(-1);
		else if (s1.size() > 0 && a[i] > a[s1.top()])
		{
			res1.push_back(s1.top());
		}
		else if (s1.size() > 0 && a[i] <= a[s1.top()])
		{
			while (s1.size() > 0 && a[i] <= a[s1.top()])
				s1.pop();
			if (s1.size() == 0)
				res1.push_back(-1);
			else {
				res1.push_back(s1.top());
			}
		}
		s1.push(i);
	}
	ll m = -1;
	for (i = 0; i < a.size(); i++)
	{
		m = max(m, a[i] * (res[i] - res1[i] - 1));
	}
	cout << m << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t = 1;
	//cin >> t;
	while (1) {
		solve();
		if (fg == 1)break;
	}
}