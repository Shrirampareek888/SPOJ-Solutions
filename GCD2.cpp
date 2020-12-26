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
	ll a, i, modu;
	string b;
	cin >> a;
	cin >> b;
	if (a == 0)
	{
		cout << b << endl;
		return;
	}
	if (b.length() == '0' && b[0] == '0')
	{
		cout << a << endl;
		return;
	}
	modu = 0;
	for (i = 0; i < b.length(); i++)
	{
		modu = (modu * 10 + b[i] - '0') % a;
	}
	cout << __gcd(a, modu) << endl;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}