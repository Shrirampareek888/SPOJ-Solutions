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
vector<ll> a;
struct segm {
	ll maxa, maxb;
} seg[400005];
void build(ll si, ll ss, ll se)
{
	if (ss == se)
	{
		seg[si].maxa = a[ss];
		seg[si].maxb = 0;
		return;
	}
	ll mid = (ss + se) / 2;
	build(2 * si + 1, ss, mid);
	build(2 * si + 2, mid + 1, se);
	vector<ll> tp;
	tp.push_back(seg[2 * si + 1].maxa);
	tp.push_back(seg[2 * si + 1].maxb);
	tp.push_back(seg[2 * si + 2].maxa);
	tp.push_back(seg[2 * si + 2].maxb);
	sort(tp.begin(), tp.end(), greater<ll>());
	seg[si].maxa = tp[0];
	seg[si].maxb = tp[1];
}
void update(ll si, ll ss, ll se, ll qs, ll val)
{
	if (ss == se && ss == qs)
	{
		a[ss] = val;
		seg[si].maxa = a[ss];
		seg[si].maxb = 0;
		return;
	}
	ll mid = (ss + se) / 2;
	if (mid >= qs)
	{
		update(2 * si + 1, ss, mid,  qs,  val);
	}
	else {
		update(2 * si + 2, mid + 1, se, qs, val);
	}
	vector<ll> tp;
	tp.push_back(seg[2 * si + 1].maxa);
	tp.push_back(seg[2 * si + 1].maxb);
	tp.push_back(seg[2 * si + 2].maxa);
	tp.push_back(seg[2 * si + 2].maxb);
	sort(tp.begin(), tp.end(), greater<ll>());
	seg[si].maxa = tp[0];
	seg[si].maxb = tp[1];
}
vector<ll> query(ll si, ll ss, ll se, ll qs, ll qe)
{
	if (qs > se || qe < ss)
	{
		vector<ll> tp;
		tp.push_back(0);
		tp.push_back(0);
		return tp;
	}
	if (ss >= qs && se <= qe)
	{
		vector<ll> tp;
		tp.push_back(seg[si].maxa);
		tp.push_back(seg[si].maxb);
		return tp;
	}
	ll mid = (ss + se) / 2;
	auto ta = query(2 * si + 1, ss, mid, qs, qe);
	auto tb = query(2 * si + 2, mid + 1, se, qs, qe);
	for (int i = 0; i < 2; i++)
		ta.push_back(tb[i]);
	sort(ta.begin(), ta.end(), greater<ll>());
	vector<ll> ans;
	ans.push_back(ta[0]);
	ans.push_back(ta[1]);
	return ans;
}
void solve()
{
	ll n, i, q;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		ll x; cin >> x; a.push_back(x);
	}
	build(0, 0, n - 1);
	cin >> q;
	while (q--)
	{
		char ch; cin >> ch;
		if (ch == 'Q')
		{
			ll qs, qe; cin >> qs >> qe;
			qs--; qe--;
			auto tp = query(0, 0, n - 1, qs, qe);
			cout << tp[0] + tp[1] << endl;
		}
		else {
			ll qx, qy;
			cin >> qx >> qy;
			qx--;
			update(0, 0, n - 1, qx, qy);
		}
	}

}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}