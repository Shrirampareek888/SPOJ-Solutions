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
void solve()
{
	ull n, i, f = 0;
	cin >> n;
	for (i = 0; i * i <= n ; i++)
	{
		ll t = n - i * i;
		if (floor((double)(sqrt(t))) == ceil((double)(sqrt(t))))
		{
			f = 1; break;
		}
	}
	if (f == 1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}