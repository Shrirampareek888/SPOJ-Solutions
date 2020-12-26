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
bool isprime[1000001];
vector<ll> prime;
void sieve()
{
	ll i;
	for (i = 2; i * i <= 1000000; i++)
	{
		if (isprime[i] == true)
		{
			for (ll j = i * i; j <= 1000000; j += i)
			{
				isprime[j] = false;
			}

			prime.push_back(i);
		}
	}
}
void solve()
{
	ll a, b, i;
	cin >> a >> b;
	ll no = __gcd(a, b);
	ll res = 1;
	for (i = 0; i < prime.size(); i++)
	{
		if (no < prime[i])
			break;
		if (no % prime[i] == 0)
		{
			ll cnt = 0;
			while (no % prime[i] == 0)
			{
				cnt++;
				no /= prime[i];
			}
			res *= (cnt + 1);
		}
	}
	if (no > 1)
	{
		res *= 2;
	}
	cout << res << endl;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t = 1;
	cin >> t;
	memset(isprime, true, sizeof(isprime));
	sieve();
	while (t--) {
		solve();
	}
}